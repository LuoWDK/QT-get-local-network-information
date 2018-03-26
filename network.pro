#-------------------------------------------------
#
# Project created by QtCreator 2018-03-26T13:37:24
#
#-------------------------------------------------

QT       += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = network
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        network_master_information_class.cpp \
    network_master_udpserver_class.cpp \
    network_client_udpclient_class.cpp

HEADERS += \
        network_master_information_class.h \
    network_master_udpserver_class.h \
    network_client_udpclient_class.h

FORMS += \
        network_master_information_class.ui \
    network_master_udpserver_class.ui \
    network_client_udpclient_class.ui
