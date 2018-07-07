#-------------------------------------------------
#
# Project created by QtCreator 2015-12-15T02:03:34
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Mp3Player
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    menuWindow.cpp

HEADERS  += mainwindow.h \
    menuWindow.h

FORMS    += mainwindow.ui

RESOURCES += \
    icon.qrc
