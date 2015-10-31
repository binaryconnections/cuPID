/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginPage
{
public:
    QTextBrowser *textBrowser;
    QLabel *adminLabel;
    QLabel *studentLabel;
    QListWidget *adminlistWidget;
    QListWidget *studentlistWidget;
    QPushButton *loginButton;
    QScrollBar *admincVscroll;
    QScrollBar *studentVscroll;
    QPushButton *pushButton;

    void setupUi(QWidget *loginPage)
    {
        if (loginPage->objectName().isEmpty())
            loginPage->setObjectName(QStringLiteral("loginPage"));
        loginPage->resize(400, 300);
        textBrowser = new QTextBrowser(loginPage);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 91, 41));
        adminLabel = new QLabel(loginPage);
        adminLabel->setObjectName(QStringLiteral("adminLabel"));
        adminLabel->setGeometry(QRect(10, 60, 67, 17));
        studentLabel = new QLabel(loginPage);
        studentLabel->setObjectName(QStringLiteral("studentLabel"));
        studentLabel->setGeometry(QRect(10, 160, 67, 17));
        adminlistWidget = new QListWidget(loginPage);
        adminlistWidget->setObjectName(QStringLiteral("adminlistWidget"));
        adminlistWidget->setGeometry(QRect(10, 80, 271, 61));
        studentlistWidget = new QListWidget(loginPage);
        studentlistWidget->setObjectName(QStringLiteral("studentlistWidget"));
        studentlistWidget->setGeometry(QRect(10, 180, 271, 61));
        loginButton = new QPushButton(loginPage);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(290, 260, 99, 27));
        admincVscroll = new QScrollBar(loginPage);
        admincVscroll->setObjectName(QStringLiteral("admincVscroll"));
        admincVscroll->setGeometry(QRect(280, 80, 16, 61));
        admincVscroll->setOrientation(Qt::Vertical);
        studentVscroll = new QScrollBar(loginPage);
        studentVscroll->setObjectName(QStringLiteral("studentVscroll"));
        studentVscroll->setGeometry(QRect(280, 180, 16, 61));
        studentVscroll->setOrientation(Qt::Vertical);
        pushButton = new QPushButton(loginPage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 260, 99, 27));

        retranslateUi(loginPage);

        QMetaObject::connectSlotsByName(loginPage);
    } // setupUi

    void retranslateUi(QWidget *loginPage)
    {
        loginPage->setWindowTitle(QApplication::translate("loginPage", "User Login Page", 0));
        textBrowser->setHtml(QApplication::translate("loginPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Login as</span></p></body></html>", 0));
        adminLabel->setText(QApplication::translate("loginPage", "Admin", 0));
        studentLabel->setText(QApplication::translate("loginPage", "Student", 0));
        loginButton->setText(QApplication::translate("loginPage", "Login", 0));
        pushButton->setText(QApplication::translate("loginPage", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class loginPage: public Ui_loginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
