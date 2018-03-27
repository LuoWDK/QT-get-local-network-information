#ifndef NETWORK_MASTER_INFORMATION_CLASS_H
#define NETWORK_MASTER_INFORMATION_CLASS_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QTextBrowser>
#include <QHostInfo>
#include <QNetworkInterface>

namespace Ui {
class InformationClass;
}

class InformationClass : public QWidget
{
    Q_OBJECT

public:
    explicit InformationClass(QWidget *parent = 0);
    ~InformationClass();
    void GetHostInfomation();

private slots:
    void on_details_push_button__clicked();

private:
    Ui::InformationClass *ui;
};

#endif // NETWORK_MASTER_INFORMATION_CLASS_H
