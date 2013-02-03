QT       += core gui

TARGET = test
TEMPLATE = app

INCLUDEPATH += "../widgets"
DEPENDPATH += "../widgets"

LIBS += -L../lib
LIBS += -lqdateeditex


SOURCES += main.cpp\
           dateedittest.cpp

HEADERS  += \
            dateedittest.h
