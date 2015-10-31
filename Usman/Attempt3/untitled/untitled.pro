#-------------------------------------------------
#
# Project created by QtCreator 2015-10-28T17:12:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app


SOURCES += main.cpp\
        welcomepage.cpp \
    createprofilepage.cpp \
    loginpage.cpp \
    studentpage.cpp \
    adminpage.cpp

HEADERS  += welcomepage.h \
    createprofilepage.h \
    loginpage.h \
    studentpage.h \
    adminpage.h

FORMS    += welcomepage.ui \
    createprofilepage.ui \
    loginpage.ui \
    studentpage.ui \
    adminpage.ui
