#include "widget.h"
#include "./ui_widget.h"
#include "QDataStream"
#include "QMessageBox"
#include "qnamespace.h"
#include "qpushbutton.h"
#include "qtablewidget.h"
#include <QDateTime>
#include <QColorDialog>
#include <QFileDialog>
#include "qwindowdefs.h"

Widget::Widget(QWidget *parent, QString name)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    myname = name;

    this->port = 9999;
    this->udpSocket = new QUdpSocket(this);

    // 绑定端口，ShareAddress模式（允许其他的服务连接到相同的端口)
    // 特别是采用多客户端监听同一个服务器端口，ReuseAddressHint模式（重新连接服务器)
    udpSocket->bind(port, QUdpSocket::ShareAddress | QUdpSocket::ReuseAddressHint);

    // 监听信号
    connect(udpSocket, &QUdpSocket::readyRead, this, &Widget::ReceiveMessage);

    connect(ui->sendBtn, &QPushButton::clicked, [=](){
        sndMsg(Msg);
    });

    // 新用户加入
    sndMsg(UserEnter);

    connect(ui->exitBtn, &QPushButton::clicked, [=](){
        this->close();
    });

    //字体类型
    connect(ui->set_font,&QFontComboBox::currentFontChanged,[=](const QFont &font){
        ui->msgTextEdit->setFontFamily(font.toString());
        ui->msgTextEdit->setFocus();
    });
    //字体大小
    void (QComboBox:: * sizebtn)(const QString &text)=&QComboBox::currentTextChanged;
    connect(ui->font_size,sizebtn,[=](const QString &text){
        ui->msgTextEdit->setFontPointSize(text.toDouble());
        ui->msgTextEdit->setFocus();
    });
    //字体的加粗
    connect(ui->boldTBtn,&QToolButton::clicked,[=](bool checked){
        if(checked)
        {
            ui->msgTextEdit->setFontWeight(QFont::Bold);
        }
        else {
            ui->msgTextEdit->setFontWeight(QFont::Normal);
        }
    });
    //字体倾斜
    connect(ui->italicTBtn,&QToolButton::clicked,[=](bool checked){
        ui->msgTextEdit->setFontItalic(checked);
        ui->msgTextEdit->setFocus();
    });
    //字体下划线
    connect(ui->underlineTBtn,&QToolButton::clicked,[=](bool checked){
        ui->msgTextEdit->setFontUnderline(checked);
        ui->msgTextEdit->setFocus();
    });
    //清空功能
    connect(ui->clearTBtn,&QToolButton::clicked,[=](){
        ui->textBrowser->clear();
    });
    connect(ui->colourTBtn,&QToolButton::clicked,[=](){
        QColor color=QColorDialog::getColor(color,this);

        ui->msgTextEdit->setTextColor(color);
    });
    connect(ui->saveTBtn,&QToolButton::clicked,[=](){
        if(ui->textBrowser->toPlainText().isEmpty())
        {
            QMessageBox::warning(this,"警告","警告！保存内容不能为空!");
            return;
        }
        QString filename=QFileDialog::getSaveFileName(this,"保存聊天记录","聊天记录","(*.txt)");
        if(!filename.isEmpty())
        {
            QFile file(filename);
            file.open(QIODevice::WriteOnly | QFile::Text);
            QTextStream stream(&file);
            stream<<ui->textBrowser->toPlainText();
            file.close();
        }
    });
}

void Widget::closeEvent(QCloseEvent*) {
    emit this->closeWidget();

    sndMsg(UserLeft);

    udpSocket->close();
    udpSocket->destroyed();
}

void Widget::sndMsg(Widget::Msgtype type) {
    QByteArray array;

    QDataStream stream(&array, QIODevice::WriteOnly);
    stream<<type<<this->getName();  // 流入 类型和用户姓名

    switch (type) {
    case Msg:
        if (this->ui->msgTextEdit->toPlainText() == "") {
            QMessageBox::warning(this, "警告", "发送内容不能为空");
            return;
        }
        stream<<this->getMsg(); // 流入 普通聊天信息
        break;

    case UserEnter:     // 不是聊天的类型 只需流入 类型和用户名
        break;

    case UserLeft:
        break;
    default:
        break;
    }

    // 书写报文
    udpSocket->writeDatagram(array.data(), array.size(), QHostAddress::Broadcast, this->port);
}

QString Widget::getName() {
    return this->myname;
}

QString Widget::getMsg() {
    QString msg = ui->msgTextEdit->toHtml();    // 返回输入内容
    ui->msgTextEdit->clear();   // 清空
    ui->msgTextEdit->setFocus();    // 设置光标
    return msg;
}

void Widget::userEnter(QString username) {
    bool isEmpty = ui->tableWidget->findItems(username, Qt::MatchExactly).isEmpty();
    if(isEmpty) {
        QTableWidgetItem* user = new QTableWidgetItem(username);
        ui->tableWidget->insertRow(0);
        ui->tableWidget->setItem(0,0,user);
        ui->textBrowser->setTextColor(Qt::gray);
        ui->textBrowser->append(username+"用户已上线");
        ui->username->setText(QString("在线人数：%1人").arg(ui->tableWidget->rowCount()));

        sndMsg(UserEnter);
    }
}

void Widget::ReceiveMessage() {
    qint64 size = udpSocket->pendingDatagramSize();
    // qint64 变int
    int mysize = static_cast<int>(size);

    QByteArray array = QByteArray(mysize, 0);
    udpSocket->readDatagram(array.data(),size);
    QDataStream stream(&array, QIODevice::ReadOnly);

    int msgtype;
    stream>>msgtype;    // 读取类型
    QString name, msg;  // 用户名和聊天信息
    QString time= QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");

    switch(msgtype) {
    case Msg:   // 普通聊天
        stream>>name>>msg;  // 流出姓名和聊天信息

        // 增加聊天信息
        ui->textBrowser->setTextColor(Qt::blue);
        ui->textBrowser->setCurrentFont(QFont("Times New Roman", 12));
        ui->textBrowser->append("["+name+"]"+time);
        ui->textBrowser->append(msg);
        break;

    case UserEnter:
        stream>>name;
        userEnter(name);
        break;
    case UserLeft:
        stream>>name;
        userLeft(name, time);
        break;
    }
}

void Widget::userLeft(QString username, QString time) {
    bool isEmpty = ui->tableWidget->findItems(username, Qt::MatchExactly).isEmpty();

    if(!isEmpty) {
        // 寻找行
        int row = ui->tableWidget->findItems(username, Qt::MatchExactly).first()->row();
        // 移除该行
        ui->tableWidget->removeRow(row);

        // 追加信息
        ui->textBrowser->setTextColor(Qt::gray);
        ui->textBrowser->append(username+"用户于"+time+"下线");
        ui->username->setText(QString("在线人数：%1人").arg(ui->tableWidget->rowCount()));
    }
}

Widget::~Widget()
{
    delete ui;
}
