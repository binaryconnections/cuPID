/********************************************************************************
** Form generated from reading UI file 'welcomepage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEPAGE_H
#define UI_WELCOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcomePage
{
public:
    QWidget *centralWidget;
    QPushButton *createProfileBtn;
    QPushButton *loginBtn;
    QTextBrowser *heading;
    QLabel *teamLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *welcomePage)
    {
        if (welcomePage->objectName().isEmpty())
            welcomePage->setObjectName(QStringLiteral("welcomePage"));
        welcomePage->resize(403, 336);
        centralWidget = new QWidget(welcomePage);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        createProfileBtn = new QPushButton(centralWidget);
        createProfileBtn->setObjectName(QStringLiteral("createProfileBtn"));
        createProfileBtn->setGeometry(QRect(150, 150, 99, 27));
        loginBtn = new QPushButton(centralWidget);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setGeometry(QRect(150, 110, 99, 27));
        heading = new QTextBrowser(centralWidget);
        heading->setObjectName(QStringLiteral("heading"));
        heading->setGeometry(QRect(30, -10, 341, 81));
        teamLabel = new QLabel(centralWidget);
        teamLabel->setObjectName(QStringLiteral("teamLabel"));
        teamLabel->setGeometry(QRect(160, 250, 231, 20));
        welcomePage->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(welcomePage);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 403, 25));
        welcomePage->setMenuBar(menuBar);
        mainToolBar = new QToolBar(welcomePage);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        welcomePage->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(welcomePage);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        welcomePage->setStatusBar(statusBar);

        retranslateUi(welcomePage);

        QMetaObject::connectSlotsByName(welcomePage);
    } // setupUi

    void retranslateUi(QMainWindow *welcomePage)
    {
        welcomePage->setWindowTitle(QApplication::translate("welcomePage", "Welcome Page", 0));
        createProfileBtn->setText(QApplication::translate("welcomePage", "Create Profile", 0));
        loginBtn->setText(QApplication::translate("welcomePage", "Login", 0));
        heading->setHtml(QApplication::translate("welcomePage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">cuPID</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Carleton University Project Partner Identifier</span></p></body></html>", 0));
        teamLabel->setText(QApplication::translate("welcomePage", "Developed by Binary Connections", 0));
    } // retranslateUi

};

namespace Ui {
    class welcomePage: public Ui_welcomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEPAGE_H
