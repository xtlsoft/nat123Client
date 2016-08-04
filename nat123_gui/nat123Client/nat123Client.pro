#-------------------------------------------------
#
# Project created by QtCreator 2016-06-04T19:45:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = nat123Client
TEMPLATE = app


SOURCES += main.cpp\
        nat123client.cpp \
    about.cpp \
    loginnow.cpp \
    mainwindow.cpp \
    thread.cpp

HEADERS  += nat123client.h \
    about.h \
    loginnow.h \
    mainwindow.h \
    thread.h

FORMS    += nat123client.ui \
    about.ui \
    loginnow.ui \
    mainwindow.ui

RESOURCES += \
    nat123Client.qrc
