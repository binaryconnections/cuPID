/********************************************************************************
** Form generated from reading UI file 'studentpage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTPAGE_H
#define UI_STUDENTPAGE_H

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

class Ui_studentPage
{
public:
    QPushButton *registerButton;
    QPushButton *editProfileButton;
    QPushButton *editPrefButton;
    QLabel *projectsLabel;
    QListView *projectList;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *studentPage)
    {
        if (studentPage->objectName().isEmpty())
            studentPage->setObjectName(QStringLiteral("studentPage"));
        studentPage->resize(400, 300);
        registerButton = new QPushButton(studentPage);
        registerButton->setObjectName(QStringLiteral("registerButton"));
        registerButton->setGeometry(QRect(30, 170, 151, 27));
        editProfileButton = new QPushButton(studentPage);
        editProfileButton->setObjectName(QStringLiteral("editProfileButton"));
        editProfileButton->setGeometry(QRect(30, 250, 151, 27));
        editPrefButton = new QPushButton(studentPage);
        editPrefButton->setObjectName(QStringLiteral("editPrefButton"));
        editPrefButton->setGeometry(QRect(30, 210, 151, 27));
        projectsLabel = new QLabel(studentPage);
        projectsLabel->setObjectName(QStringLiteral("projectsLabel"));
        projectsLabel->setGeometry(QRect(30, 80, 151, 17));
        projectList = new QListView(studentPage);
        projectList->setObjectName(QStringLiteral("projectList"));
        projectList->setGeometry(QRect(30, 100, 256, 51));
        textBrowser = new QTextBrowser(studentPage);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 10, 171, 31));

        retranslateUi(studentPage);

        QMetaObject::connectSlotsByName(studentPage);
    } // setupUi

    void retranslateUi(QWidget *studentPage)
    {
        studentPage->setWindowTitle(QApplication::translate("studentPage", "Form", 0));
        registerButton->setText(QApplication::translate("studentPage", "Project Registration", 0));
        editProfileButton->setText(QApplication::translate("studentPage", "Edit Profile", 0));
        editPrefButton->setText(QApplication::translate("studentPage", "Edit Preferences", 0));
        projectsLabel->setText(QApplication::translate("studentPage", "Projects registered in", 0));
        textBrowser->setHtml(QApplication::translate("studentPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Logged in as Student </span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class studentPage: public Ui_studentPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTPAGE_H
