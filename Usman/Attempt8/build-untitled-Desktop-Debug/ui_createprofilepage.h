/********************************************************************************
** Form generated from reading UI file 'createprofilepage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPROFILEPAGE_H
#define UI_CREATEPROFILEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createProfilePage
{
public:
    QTextBrowser *createProfileHeading;
    QLineEdit *userText;
    QLabel *userlabel;
    QDialogButtonBox *dialogButtonBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *adminToggle;
    QRadioButton *studentToggle;

    void setupUi(QWidget *createProfilePage)
    {
        if (createProfilePage->objectName().isEmpty())
            createProfilePage->setObjectName(QStringLiteral("createProfilePage"));
        createProfilePage->resize(400, 300);
        createProfileHeading = new QTextBrowser(createProfilePage);
        createProfileHeading->setObjectName(QStringLiteral("createProfileHeading"));
        createProfileHeading->setGeometry(QRect(20, 20, 151, 41));
        userText = new QLineEdit(createProfilePage);
        userText->setObjectName(QStringLiteral("userText"));
        userText->setGeometry(QRect(10, 110, 201, 27));
        userlabel = new QLabel(createProfilePage);
        userlabel->setObjectName(QStringLiteral("userlabel"));
        userlabel->setGeometry(QRect(10, 90, 71, 17));
        dialogButtonBox = new QDialogButtonBox(createProfilePage);
        dialogButtonBox->setObjectName(QStringLiteral("dialogButtonBox"));
        dialogButtonBox->setGeometry(QRect(210, 250, 176, 27));
        dialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(createProfilePage);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 140, 167, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        adminToggle = new QRadioButton(widget);
        adminToggle->setObjectName(QStringLiteral("adminToggle"));
        adminToggle->setChecked(true);

        horizontalLayout->addWidget(adminToggle);

        studentToggle = new QRadioButton(widget);
        studentToggle->setObjectName(QStringLiteral("studentToggle"));

        horizontalLayout->addWidget(studentToggle);


        retranslateUi(createProfilePage);

        QMetaObject::connectSlotsByName(createProfilePage);
    } // setupUi

    void retranslateUi(QWidget *createProfilePage)
    {
        createProfilePage->setWindowTitle(QApplication::translate("createProfilePage", "Create Profile Page", 0));
        createProfileHeading->setHtml(QApplication::translate("createProfilePage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Create Profile</span></p></body></html>", 0));
        userlabel->setText(QApplication::translate("createProfilePage", "Username", 0));
        adminToggle->setText(QApplication::translate("createProfilePage", "Admin", 0));
        studentToggle->setText(QApplication::translate("createProfilePage", "Student", 0));
    } // retranslateUi

};

namespace Ui {
    class createProfilePage: public Ui_createProfilePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPROFILEPAGE_H
