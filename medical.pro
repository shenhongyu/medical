#-------------------------------------------------
#
# Project created by QtCreator 2018-07-15T14:57:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = medical
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    log.cpp

HEADERS  += login.h \
    log.h

FORMS    += login.ui \
    log.ui

RESOURCES += \
    tietu.qrc
