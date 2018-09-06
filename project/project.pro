#-------------------------------------------------
#
# Project created by QtCreator 2018-09-04T04:59:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = project
TEMPLATE = app


SOURCES += main.cpp\
    user.cpp \
    network_interface.cpp \
    client_socket.cpp \
    compose.cpp \
    mailbox_window.cpp \
    login_diag.cpp \
    signup_diag.cpp

HEADERS  += \
    user.h \
    network_interface.h \
    client_socket.h \
    email_ui.h \
    compose.h \
    mailbox_window.h \
    login_diag.h \
    signup_diag.h

FORMS    += \
    compose.ui \
    mailbox_window.ui \
    login_diag.ui \
    signup_diag.ui

OTHER_FILES +=

RESOURCES += \
    resource.qrc
