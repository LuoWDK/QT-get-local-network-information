#ifndef NETWORK_MASTER_TEST_NETWORK_CLASS_H
#define NETWORK_MASTER_TEST_NETWORK_CLASS_H

#include <QWidget>
#include <QLabel>
#include <QComboBox>
#include <QPushButton>
#include <QTimer>
#include "network_dr_information_class.h"
#include "network_client_udpclient_class.h"
#include "network_server_udpserver_class.h"

namespace Ui {
class TestNetworkClass;
}

class TestNetworkClass : public QWidget
{
    Q_OBJECT

public:
    explicit TestNetworkClass(QWidget *parent = 0);
    ~TestNetworkClass();

private slots:
    void on_submit_pushButton__clicked();

private:
    Ui::TestNetworkClass *ui;
};

#endif // NETWORK_MASTER_TEST_NETWORK_CLASS_H
