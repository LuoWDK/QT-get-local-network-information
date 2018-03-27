#ifndef NETWORK_MASTER_UDPSERVER_CLASS_H
#define NETWORK_MASTER_UDPSERVER_CLASS_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QUdpSocket>
#include <QTimer>

namespace Ui {
class UdpServerClass;
}

class UdpServerClass : public QWidget
{
    Q_OBJECT

public:
    explicit UdpServerClass(QWidget *parent = 0);
    ~UdpServerClass();

private slots:
    void on_start_push_button__clicked();
    void Timeout();

private:
    Ui::UdpServerClass *ui;
    int port_;
    bool is_started_;
    QUdpSocket *udp_socket_;
    QTimer *timer_;
};

#endif // NETWORK_MASTER_UDPSERVER_CLASS_H
