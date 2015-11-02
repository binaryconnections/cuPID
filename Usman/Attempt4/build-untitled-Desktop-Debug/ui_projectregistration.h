/********************************************************************************
** Form generated from reading UI file 'projectregistration.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTREGISTRATION_H
#define UI_PROJECTREGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_projectRegistration
{
public:
    QTextBrowser *registration;
    QListWidget *projectList;
    QLabel *projectLabel;
    QPushButton *registerButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *projectRegistration)
    {
        if (projectRegistration->objectName().isEmpty())
            projectRegistration->setObjectName(QStringLiteral("projectRegistration"));
        projectRegistration->resize(400, 300);
        registration = new QTextBrowser(projectRegistration);
        registration->setObjectName(QStringLiteral("registration"));
        registration->setGeometry(QRect(10, 10, 121, 41));
        projectList = new QListWidget(projectRegistration);
        projectList->setObjectName(QStringLiteral("projectList"));
        projectList->setGeometry(QRect(10, 80, 256, 181));
        projectLabel = new QLabel(projectRegistration);
        projectLabel->setObjectName(QStringLiteral("projectLabel"));
        projectLabel->setGeometry(QRect(10, 60, 67, 17));
        registerButton = new QPushButton(projectRegistration);
        registerButton->setObjectName(QStringLiteral("registerButton"));
        registerButton->setGeometry(QRect(280, 90, 99, 27));
        cancelButton = new QPushButton(projectRegistration);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(280, 130, 99, 27));

        retranslateUi(projectRegistration);

        QMetaObject::connectSlotsByName(projectRegistration);
    } // setupUi

    void retranslateUi(QWidget *projectRegistration)
    {
        projectRegistration->setWindowTitle(QApplication::translate("projectRegistration", "Form", 0));
        registration->setHtml(QApplication::translate("projectRegistration", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Registration</span></p></body></html>", 0));
        projectLabel->setText(QApplication::translate("projectRegistration", "Projects", 0));
        registerButton->setText(QApplication::translate("projectRegistration", "Register", 0));
        cancelButton->setText(QApplication::translate("projectRegistration", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class projectRegistration: public Ui_projectRegistration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTREGISTRATION_H
