#include "network_client_udpclient_class.h"
#include "ui_network_client_udpclient_class.h"
#include <QMessageBox>
#include <QHostAddress>

UdpClientClass::UdpClientClass(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UdpClientClass)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("UDP Client"));
    port_ = 5555;
    udp_socket_ = new QUdpSocket(this);
    connect(udp_socket_, SIGNAL(readyRead()), this, SLOT(DataReceived()));

    bool result = udp_socket_->bind(port_);
    if (!result)
    {
        QMessageBox::information(this, tr("error"), tr("udp socket create error!"));
        return;
    }
}

UdpClientClass::~UdpClientClass()
{
    delete ui;
}

void UdpClientClass::on_close_pushButton__clicked()
{
    close();
}

void UdpClientClass::DataReceived()
{
    while (udp_socket_->hasPendingDatagrams())
    {
        QByteArray datagram;
        datagram.resize(udp_socket_->pendingDatagramSize());
        udp_socket_->readDatagram(datagram.data(), datagram.size());

        QString msg = datagram.data();
        ui->receive_textedit_->insertPlainText(msg);
    }
}
