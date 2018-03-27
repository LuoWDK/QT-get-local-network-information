#include "network_master_test_network_class.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    TestNetworkClass w;
    w.show();

    return a.exec();
}
