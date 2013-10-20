#-------------------------------------------------
#
# Project created by QtCreator 2013-10-20T23:40:27
#
#-------------------------------------------------

QT       -= core gui

TARGET = Universus
TEMPLATE = lib

DEFINES += UNIVERSUS_LIBRARY

SOURCES += \
    u_window.cpp \
    u_timer.cpp

HEADERS +=\
    u_window.h \
    u_timer.h \
    u_platform.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
