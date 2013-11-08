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
    bigint/README \
    bigint/NumberlikeArray.hh \
    bigint/BigUnsignedInABase.hh \
    bigint/BigUnsigned.hh \
    bigint/BigIntegerUtils.hh \
    bigint/BigIntegerLibrary.hh \
    bigint/BigIntegerAlgorithms.hh \
    bigint/BigInteger.hh

FORMS    += mainwindow.ui

LIBS +=bigint.lib
