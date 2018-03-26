#include "network_master_information_class.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InformationClass w;
    w.show();

    return a.exec();
}
