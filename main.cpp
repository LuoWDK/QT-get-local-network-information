#include "network_master_information_class.h"
#include "network_master_udpserver_class.h"
#include "network_client_udpclient_class.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InformationClass w;
    w.show();

    UDPServerClass w2;
    w2.show();

    UdpClientClass w3;
    w3.show();

    return a.exec();
}
