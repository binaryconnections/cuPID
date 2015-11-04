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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginPage
{
public:
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *loginButton;
    QLabel *label;
    QLineEdit *loginLineEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *adminradioButton;
    QRadioButton *studentradioButton;

    void setupUi(QWidget *loginPage)
    {
        if (loginPage->objectName().isEmpty())
            loginPage->setObjectName(QStringLiteral("loginPage"));
        loginPage->resize(400, 300);
        textBrowser = new QTextBrowser(loginPage);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 91, 41));
        layoutWidget = new QWidget(loginPage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 260, 178, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));

        horizontalLayout->addWidget(loginButton);

        label = new QLabel(loginPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 90, 81, 17));
        loginLineEdit = new QLineEdit(loginPage);
        loginLineEdit->setObjectName(QStringLiteral("loginLineEdit"));
        loginLineEdit->setGeometry(QRect(10, 110, 141, 27));
        widget = new QWidget(loginPage);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 140, 167, 24));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        adminradioButton = new QRadioButton(widget);
        adminradioButton->setObjectName(QStringLiteral("adminradioButton"));

        horizontalLayout_2->addWidget(adminradioButton);

        studentradioButton = new QRadioButton(widget);
        studentradioButton->setObjectName(QStringLiteral("studentradioButton"));

        horizontalLayout_2->addWidget(studentradioButton);


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
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Login As</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("loginPage", "Back", 0));
        loginButton->setText(QApplication::translate("loginPage", "Login", 0));
        label->setText(QApplication::translate("loginPage", "Username", 0));
        adminradioButton->setText(QApplication::translate("loginPage", "Admin", 0));
        studentradioButton->setText(QApplication::translate("loginPage", "Student", 0));
    } // retranslateUi

};

namespace Ui {
    class loginPage: public Ui_loginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
