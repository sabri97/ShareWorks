#-------------------------------------------------
#
# Project created by QtCreator 2021-02-17T08:16:25
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Login
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    admin_dialog.cpp \
    user.cpp \
    user_dialog.cpp \
    login.cpp \
    gestionvol_dialog.cpp \
    gestionvoyageur_dialog.cpp

HEADERS  += mainwindow.h \
    admin_dialog.h \
    user.h \
    user_dialog.h \
    login.h \
    gestionvol_dialog.h \
    gestionvoyageur_dialog.h

FORMS    += mainwindow.ui \
    admin_dialog.ui \
    user_dialog.ui \
    gestionvol_dialog.ui \
    gestionvoyageur_dialog.ui

RESOURCES += \
    MyResource.qrc \
    MyResource.qrc
