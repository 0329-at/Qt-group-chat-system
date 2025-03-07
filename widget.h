#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtNetwork/QUdpSocket>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    enum Msgtype{Msg, UserEnter, UserLeft};   // 普通用户信息，用户进入，用户离开

    explicit Widget(QWidget *parent, QString name);

    // 广播UDP信息
    void sndMsg(Msgtype type);

    // 获取名字
    QString getName();

    // 获取聊天信息
    QString getMsg();

    // 处理用户进入
    void userEnter(QString username);

    // 处理用户离开
    void userLeft(QString username, QString time);

    // 接受UDP信息
    void ReceiveMessage();

    // 重写关闭事件
    void closeEvent(QCloseEvent*);

    ~Widget();
signals:
    void closeWidget();

private:
    Ui::Widget *ui;
    quint16 port;   // 端口
    QString myname;  // 名字
    QUdpSocket* udpSocket;  // udp 套接字
};
#endif // WIDGET_H
