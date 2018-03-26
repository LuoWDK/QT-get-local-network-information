#include "network_master_information_class.h"
#include "ui_network_master_information_class.h"

InformationClass::InformationClass(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InformationClass)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("Network Information"));
    GetHostInfomation();
}

InformationClass::~InformationClass()
{
    delete ui;
}

void InformationClass::GetHostInfomation()
{
    QString local_host_name = QHostInfo::localHostName();
    ui->host_name_line_edit_->setText(local_host_name);
    QHostInfo host_info = QHostInfo::fromName(local_host_name);
    QList <QHostAddress> list_address = host_info.addresses();
    if (!list_address.empty())
    {
        ui->ip_address_line_edit_->setText(list_address.at(2).toString());
    }
}

void InformationClass::on_details_push_button__clicked()
{
    QString detail = "";
    QList <QNetworkInterface> list = QNetworkInterface::allInterfaces();

    for (int i = 0; i < list.count(); ++i)
    {
        QNetworkInterface interface = list.at(i);
        detail = detail + tr("Device: ") + interface.name() + "\n";
        detail = detail + tr("Device address:") + interface.hardwareAddress() + "\n";
        QList <QNetworkAddressEntry> entry_list = interface.addressEntries();
        for (int j = 1; j < entry_list.count(); ++j)
        {
            QNetworkAddressEntry entry = entry_list.at(j);
            detail = detail + tr("IP address: ") + entry.ip().toString() + "\n";
            detail = detail + tr("Subnet mask: ") + entry.netmask().toString() + "\n";
            detail = detail + tr("Broadcast address: ") +entry.broadcast().toString() + "\n";
        }
        detail = detail + "\n";
    }
    ui->detail_text_browser_->setText(detail);
}
