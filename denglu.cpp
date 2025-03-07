#include "denglu.h"
#include "ui_denglu.h"
#include "QList"
#include "QToolButton"
#include "widget.h"
#include <QMessageBox>

denglu::denglu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::denglu)
{
    ui->setupUi(this);

    // 设置图标
    this->setWindowIcon(QIcon(":/images/qq.png"));
    // 设置名称
    this->setWindowTitle("qq 2025");
    QList<QString> nameList;
    nameList<<"01"<<"02"<<"03"<<"04"<<"05"<<"06"<<"07"<<"08"<<"09";
    QStringList iconNameList;
    iconNameList << "spqy" << "ymrl" << "qq" << "Cherry" << "dr"
                 << "jj" << "lswh" << "qmnn" << "spqy";
    QVector<QToolButton*> vector;
    for (int i = 0; i < 9; i++) {
        QToolButton *btn = new QToolButton(this);

        // 加载图标
        btn->setIcon(QPixmap(QString(":/images/%1.png").arg(iconNameList[i])));
        // 设置图片大小
        btn->setIconSize(QPixmap(QString(":/images/%1.png").arg(iconNameList[i])).size());
        // 设置网名
        btn->setText(QString("%1").arg(nameList[i]));
        // 设置透明
        btn->setAutoRaise(true);
        // 设置显式格式
        btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        // 放到valyout里面
        ui->valyout->addWidget(btn);
        vector.push_back(btn);

        IsShow.push_back(false);
    }
    for (int i = 0; i < 9; i++) {
        connect(vector[i], &QToolButton::clicked, [=](){
            if (IsShow[i]) {
                QMessageBox::warning(this, "警告", "该聊天窗口已被打开！");
                return;
            }

            IsShow[i] = true;
            Widget *widget = new Widget(nullptr, vector[i]->text());
            widget->setWindowIcon(vector[i]->icon());
            widget->setWindowTitle(vector[i]->text());
            widget->show();

            // 关闭时将对于的IsShow改为false
            connect(widget, &Widget::closeWidget,this,[=](){
                IsShow[i]=false;
            });
        });
    }
}

denglu::~denglu()
{
    delete ui;
}
