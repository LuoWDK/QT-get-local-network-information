#ifndef NETWORK_CLIENT_UDPCLIENT_CLASS_H
#define NETWORK_CLIENT_UDPCLIENT_CLASS_H

#include <QWidget>
#include <QTextEdit>
#include <QPushButton>
#include <QUdpSocket>

namespace Ui {
class UdpClientClass;
}

class UdpClientClass : public QWidget
{
    Q_OBJECT

public:
    explicit UdpClientClass(QWidget *parent = 0);
    ~UdpClientClass();

private slots:
    void on_close_pushButton__clicked();
    void DataReceived();

private:
    Ui::UdpClientClass *ui;
    int port_;
    QUdpSocket *udp_socket_;
};

#endif // NETWORK_CLIENT_UDPCLIENT_CLASS_H
