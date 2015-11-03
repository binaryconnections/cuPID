/********************************************************************************
** Form generated from reading UI file 'createprojectpage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPROJECTPAGE_H
#define UI_CREATEPROJECTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createProjectPage
{
public:
    QLabel *descrp;
    QLabel *maxCap;
    QLineEdit *size;
    QTextEdit *nameText;
    QPushButton *createButton;
    QPushButton *cancelButton;
    QTextBrowser *createProjectDescription;

    void setupUi(QWidget *createProjectPage)
    {
        if (createProjectPage->objectName().isEmpty())
            createProjectPage->setObjectName(QStringLiteral("createProjectPage"));
        createProjectPage->resize(400, 300);
        descrp = new QLabel(createProjectPage);
        descrp->setObjectName(QStringLiteral("descrp"));
        descrp->setGeometry(QRect(20, 80, 131, 17));
        maxCap = new QLabel(createProjectPage);
        maxCap->setObjectName(QStringLiteral("maxCap"));
        maxCap->setGeometry(QRect(20, 150, 101, 17));
        size = new QLineEdit(createProjectPage);
        size->setObjectName(QStringLiteral("size"));
        size->setGeometry(QRect(20, 170, 113, 27));
        nameText = new QTextEdit(createProjectPage);
        nameText->setObjectName(QStringLiteral("nameText"));
        nameText->setGeometry(QRect(20, 100, 171, 51));
        createButton = new QPushButton(createProjectPage);
        createButton->setObjectName(QStringLiteral("createButton"));
        createButton->setGeometry(QRect(280, 240, 99, 27));
        cancelButton = new QPushButton(createProjectPage);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(180, 240, 99, 27));
        createProjectDescription = new QTextBrowser(createProjectPage);
        createProjectDescription->setObjectName(QStringLiteral("createProjectDescription"));
        createProjectDescription->setGeometry(QRect(20, 10, 141, 41));

        retranslateUi(createProjectPage);

        QMetaObject::connectSlotsByName(createProjectPage);
    } // setupUi

    void retranslateUi(QWidget *createProjectPage)
    {
        createProjectPage->setWindowTitle(QApplication::translate("createProjectPage", "Form", 0));
        descrp->setText(QApplication::translate("createProjectPage", "Name/Description", 0));
        maxCap->setText(QApplication::translate("createProjectPage", "Max. Capacity", 0));
        createButton->setText(QApplication::translate("createProjectPage", "Create", 0));
        cancelButton->setText(QApplication::translate("createProjectPage", "Cancel", 0));
        createProjectDescription->setHtml(QApplication::translate("createProjectPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Create Project</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class createProjectPage: public Ui_createProjectPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPROJECTPAGE_H
