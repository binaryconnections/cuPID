/********************************************************************************
** Form generated from reading UI file 'userprofilepage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPROFILEPAGE_H
#define UI_USERPROFILEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userProfilePage
{
public:
    QTextBrowser *textBrowser;
    QLabel *usernameLabel;
    QLineEdit *usernameText;
    QDialogButtonBox *buttonBox;
    QPushButton *selfPrefButton;
    QLabel *editselfpreflabel;

    void setupUi(QWidget *userProfilePage)
    {
        if (userProfilePage->objectName().isEmpty())
            userProfilePage->setObjectName(QStringLiteral("userProfilePage"));
        userProfilePage->resize(400, 300);
        textBrowser = new QTextBrowser(userProfilePage);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 111, 41));
        usernameLabel = new QLabel(userProfilePage);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setGeometry(QRect(10, 80, 71, 17));
        usernameText = new QLineEdit(userProfilePage);
        usernameText->setObjectName(QStringLiteral("usernameText"));
        usernameText->setGeometry(QRect(10, 100, 141, 27));
        buttonBox = new QDialogButtonBox(userProfilePage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(210, 260, 176, 27));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        selfPrefButton = new QPushButton(userProfilePage);
        selfPrefButton->setObjectName(QStringLiteral("selfPrefButton"));
        selfPrefButton->setGeometry(QRect(10, 160, 99, 27));
        editselfpreflabel = new QLabel(userProfilePage);
        editselfpreflabel->setObjectName(QStringLiteral("editselfpreflabel"));
        editselfpreflabel->setGeometry(QRect(10, 140, 151, 17));

        retranslateUi(userProfilePage);

        QMetaObject::connectSlotsByName(userProfilePage);
    } // setupUi

    void retranslateUi(QWidget *userProfilePage)
    {
        userProfilePage->setWindowTitle(QApplication::translate("userProfilePage", "Form", 0));
        textBrowser->setHtml(QApplication::translate("userProfilePage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Edit Profile</span></p></body></html>", 0));
        usernameLabel->setText(QApplication::translate("userProfilePage", "Username", 0));
        selfPrefButton->setText(QApplication::translate("userProfilePage", "Edit", 0));
        editselfpreflabel->setText(QApplication::translate("userProfilePage", "Edit Self Preferences", 0));
    } // retranslateUi

};

namespace Ui {
    class userProfilePage: public Ui_userProfilePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPROFILEPAGE_H
