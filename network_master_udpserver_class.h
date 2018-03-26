#ifndef NETWORK_MASTER_UDPSERVER_CLASS_H
#define NETWORK_MASTER_UDPSERVER_CLASS_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QUdpSocket>
#include <QTimer>

namespace Ui {
class UDPServerClass;
}

class UDPServerClass : public QWidget
{
    Q_OBJECT

public:
    explicit UDPServerClass(QWidget *parent = 0);
    ~UDPServerClass();

private slots:
    void on_start_push_button__clicked();
    void Timeout();

private:
    Ui::UDPServerClass *ui;
    int port_;
    bool is_started_;
    QUdpSocket *udp_socket_;
    QTimer *timer_;
};

#endif // NETWORK_MASTER_UDPSERVER_CLASS_H
