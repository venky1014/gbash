#-------------------------------------------------
#
# Project created by QtCreator 2015-09-16T16:42:03
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Terminal_pro
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    globals.cpp \
    echo.cpp \
    ls.cpp \
    pwd.cpp \
    mkdir.cpp \
    rm.cpp

HEADERS += \
    command.h \
    globals.h
