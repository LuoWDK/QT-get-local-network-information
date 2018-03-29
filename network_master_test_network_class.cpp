#include "network_master_test_network_class.h"
#include "ui_network_master_test_network_class.h"

TestNetworkClass::TestNetworkClass(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestNetworkClass)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("Features"));
}

TestNetworkClass::~TestNetworkClass()
{
    delete ui;
}

void TestNetworkClass::on_submit_pushButton__clicked()
{
    QString item = ui->item_comboBox_->currentText();
    if (item.startsWith("IP", Qt::CaseSensitive))
    {
        InformationClass *ip_window = new InformationClass();
        ip_window->show();
    }
    else if (item.startsWith("UDP S", Qt::CaseSensitive))
    {
        UdpServerClass *udpserver_window = new UdpServerClass();
        udpserver_window->show();
    }
    else if (item.startsWith("UDP C", Qt::CaseSensitive))
    {
        UdpClientClass *udpclient_window = new UdpClientClass();
        udpclient_window->show();
    }
}
