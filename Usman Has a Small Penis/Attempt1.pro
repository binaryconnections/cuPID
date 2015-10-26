#-------------------------------------------------
#
# Project created by QtCreator 2015-10-26T17:59:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Attempt1
TEMPLATE = app


SOURCES += main.cpp\
        userlogin.cpp \
    user.cpp \
    admin.cpp \
    student.cpp \
    project.cpp

HEADERS  += userlogin.h \
    user.h \
    admin.h \
    student.h \
    project.h

FORMS    += userlogin.ui
