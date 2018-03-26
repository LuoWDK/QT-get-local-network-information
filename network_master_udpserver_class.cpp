#include "network_master_udpserver_class.h"
#include "ui_network_master_udpserver_class.h"
#include <QHostAddress>

UDPServerClass::UDPServerClass(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UDPServerClass)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("UDP server"));
    port_ = 5555;
    is_started_ = false;
    udp_socket_ = new QUdpSocket(this);
    timer_ = new QTimer(this);
    connect(timer_, SIGNAL(timeout()), this, SLOT(Timeout()));
}

UDPServerClass::~UDPServerClass()
{
    delete ui;
}

void UDPServerClass::on_start_push_button__clicked()
{
    if (!is_started_)
    {
        ui->start_push_button_->setText(tr("Stop"));
        timer_->start(10000);
        is_started_ = true;
    }
    else
    {
        ui->start_push_button_->setText(tr("Start"));
        is_started_ = false;
        timer_->stop();
    }
}

void UDPServerClass::Timeout()
{
    QString msg = ui->timer_line_edit_->text();
    int length = 0;
    if (msg == "")
    {
        return;
    }
    if ( (length = udp_socket_->writeDatagram(msg.toLatin1(), msg.length(), QHostAddress::Broadcast, port_)) != msg.length())
    {
        return;
    }
}
