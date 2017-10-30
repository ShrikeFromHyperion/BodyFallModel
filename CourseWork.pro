#-------------------------------------------------
#
# Project created by QtCreator 2017-09-26T18:29:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets charts

TARGET = CourseWork
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    eulersmethod.cpp \
    widgetplot.cpp

HEADERS  += mainwindow.h \
    eulersmethod.h \
    widgetplot.h

FORMS    += mainwindow.ui
