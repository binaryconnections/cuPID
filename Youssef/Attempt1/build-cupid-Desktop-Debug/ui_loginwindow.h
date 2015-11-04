/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginWindow
{
public:
    QWidget *centralWidget;
    QPushButton *loginButton;
    QPushButton *createProfile;
    QTextBrowser *welcome;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *loginWindow)
    {
        if (loginWindow->objectName().isEmpty())
            loginWindow->setObjectName(QStringLiteral("loginWindow"));
        loginWindow->resize(400, 300);
        centralWidget = new QWidget(loginWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        loginButton = new QPushButton(centralWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(140, 100, 99, 27));
        createProfile = new QPushButton(centralWidget);
        createProfile->setObjectName(QStringLiteral("createProfile"));
        createProfile->setGeometry(QRect(140, 140, 101, 27));
        welcome = new QTextBrowser(centralWidget);
        welcome->setObjectName(QStringLiteral("welcome"));
        welcome->setGeometry(QRect(60, 10, 256, 71));
        loginWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(loginWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        loginWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(loginWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        loginWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(loginWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        loginWindow->setStatusBar(statusBar);

        retranslateUi(loginWindow);

        QMetaObject::connectSlotsByName(loginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *loginWindow)
    {
        loginWindow->setWindowTitle(QApplication::translate("loginWindow", "loginWindow", 0));
        loginButton->setText(QApplication::translate("loginWindow", "Login", 0));
        createProfile->setText(QApplication::translate("loginWindow", "Create Profile", 0));
        welcome->setHtml(QApplication::translate("loginWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Welcome to cuPID </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Carleton University Project Partner Identifier</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class loginWindow: public Ui_loginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
