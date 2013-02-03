TEMPLATE = lib
TARGET = qdateeditex

CONFIG += STATIC
DEFINES += WIDGETS_LIBRARY

INCLUDEPATH += .
DEPENDPATH += .

DESTDIR = ../lib

HEADERS = \
        qtableviewex.h \
        widgets_export.h \
        qdateeditex.h

SOURCES = \
        qdateeditex.cpp

RESOURCES += \
    widgets.qrc
