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
        ip_window_ = new InformationClass();
        ip_window_->show();
    }
    else if (item.startsWith("UDP", Qt::CaseSensitive))
    {
        udpclient_window_ = new UdpClientClass();
        udpclient_window_->show();
        udpserver_window_ = new UdpServerClass();
        udpserver_window_->show();
    }
    else if (item.startsWith("TCP", Qt::CaseSensitive))
    {
    }
}
