#-------------------------------------------------
#
# Project created by QtCreator 2013-08-12T14:13:17
#
#-------------------------------------------------

QT       += core gui

TARGET = ElGamal
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    md5.cpp 
   

HEADERS  += mainwindow.h \
    md5.h \
    crypto_functions.h
FORMS    += mainwindow.ui
INCLUDEPATH += $$PWD/bigint
DEPENDPATH += $$PWD/bigint
LIBS += $$PWD/bigint/debug/bigint.lib
