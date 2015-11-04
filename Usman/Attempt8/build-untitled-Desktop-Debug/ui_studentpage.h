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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentPage
{
public:
    QLabel *projectsLabel;
    QListView *projectList;
    QTextBrowser *textBrowser;
    QPushButton *logoutButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *editProfileButton;
    QPushButton *editPrefButton;
    QPushButton *registerButton;

    void setupUi(QWidget *studentPage)
    {
        if (studentPage->objectName().isEmpty())
            studentPage->setObjectName(QStringLiteral("studentPage"));
        studentPage->resize(400, 300);
        projectsLabel = new QLabel(studentPage);
        projectsLabel->setObjectName(QStringLiteral("projectsLabel"));
        projectsLabel->setGeometry(QRect(20, 70, 151, 17));
        projectList = new QListView(studentPage);
        projectList->setObjectName(QStringLiteral("projectList"));
        projectList->setGeometry(QRect(20, 90, 261, 71));
        textBrowser = new QTextBrowser(studentPage);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 171, 31));
        logoutButton = new QPushButton(studentPage);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        logoutButton->setGeometry(QRect(320, 270, 71, 27));
        layoutWidget = new QWidget(studentPage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 180, 157, 95));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        editProfileButton = new QPushButton(layoutWidget);
        editProfileButton->setObjectName(QStringLiteral("editProfileButton"));

        verticalLayout->addWidget(editProfileButton);

        editPrefButton = new QPushButton(layoutWidget);
        editPrefButton->setObjectName(QStringLiteral("editPrefButton"));

        verticalLayout->addWidget(editPrefButton);

        registerButton = new QPushButton(layoutWidget);
        registerButton->setObjectName(QStringLiteral("registerButton"));

        verticalLayout->addWidget(registerButton);


        retranslateUi(studentPage);

        QMetaObject::connectSlotsByName(studentPage);
    } // setupUi

    void retranslateUi(QWidget *studentPage)
    {
        studentPage->setWindowTitle(QApplication::translate("studentPage", "Form", 0));
        projectsLabel->setText(QApplication::translate("studentPage", "Projects registered in", 0));
        textBrowser->setHtml(QApplication::translate("studentPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Logged in as Student </span></p></body></html>", 0));
        logoutButton->setText(QApplication::translate("studentPage", "Logout", 0));
        editProfileButton->setText(QApplication::translate("studentPage", "Edit Profile", 0));
        editPrefButton->setText(QApplication::translate("studentPage", "Edit Preferences", 0));
        registerButton->setText(QApplication::translate("studentPage", "Project Registration", 0));
    } // retranslateUi

};

namespace Ui {
    class studentPage: public Ui_studentPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTPAGE_H
