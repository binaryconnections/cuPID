/********************************************************************************
** Form generated from reading UI file 'adminpage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPAGE_H
#define UI_ADMINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminPage
{
public:
    QTextBrowser *adminLogin;
    QLabel *label;
    QListView *projectList;
    QPushButton *createProjectButton;
    QPushButton *modifyProjectButton;
    QPushButton *editPrefButton;

    void setupUi(QWidget *adminPage)
    {
        if (adminPage->objectName().isEmpty())
            adminPage->setObjectName(QStringLiteral("adminPage"));
        adminPage->resize(400, 300);
        adminLogin = new QTextBrowser(adminPage);
        adminLogin->setObjectName(QStringLiteral("adminLogin"));
        adminLogin->setGeometry(QRect(20, 10, 161, 31));
        label = new QLabel(adminPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 131, 17));
        projectList = new QListView(adminPage);
        projectList->setObjectName(QStringLiteral("projectList"));
        projectList->setGeometry(QRect(20, 90, 256, 81));
        createProjectButton = new QPushButton(adminPage);
        createProjectButton->setObjectName(QStringLiteral("createProjectButton"));
        createProjectButton->setGeometry(QRect(20, 190, 121, 27));
        modifyProjectButton = new QPushButton(adminPage);
        modifyProjectButton->setObjectName(QStringLiteral("modifyProjectButton"));
        modifyProjectButton->setGeometry(QRect(20, 220, 121, 27));
        editPrefButton = new QPushButton(adminPage);
        editPrefButton->setObjectName(QStringLiteral("editPrefButton"));
        editPrefButton->setGeometry(QRect(20, 250, 121, 27));

        retranslateUi(adminPage);

        QMetaObject::connectSlotsByName(adminPage);
    } // setupUi

    void retranslateUi(QWidget *adminPage)
    {
        adminPage->setWindowTitle(QApplication::translate("adminPage", "Form", 0));
        adminLogin->setHtml(QApplication::translate("adminPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Logged in as Admin</span></p></body></html>", 0));
        label->setText(QApplication::translate("adminPage", "Projects", 0));
        createProjectButton->setText(QApplication::translate("adminPage", "Create Project", 0));
        modifyProjectButton->setText(QApplication::translate("adminPage", "Modify Project", 0));
        editPrefButton->setText(QApplication::translate("adminPage", "Edit Preferences", 0));
    } // retranslateUi

};

namespace Ui {
    class adminPage: public Ui_adminPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H
