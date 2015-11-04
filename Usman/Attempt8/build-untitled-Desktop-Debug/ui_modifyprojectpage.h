/********************************************************************************
** Form generated from reading UI file 'modifyprojectpage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYPROJECTPAGE_H
#define UI_MODIFYPROJECTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modifyProjectPage
{
public:
    QLabel *maxCap;
    QLineEdit *size;
    QLabel *descrp;
    QTextBrowser *modifyProjectDescription;
    QTextEdit *modifyDescrp;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QPushButton *updateButton;

    void setupUi(QWidget *modifyProjectPage)
    {
        if (modifyProjectPage->objectName().isEmpty())
            modifyProjectPage->setObjectName(QStringLiteral("modifyProjectPage"));
        modifyProjectPage->resize(400, 300);
        maxCap = new QLabel(modifyProjectPage);
        maxCap->setObjectName(QStringLiteral("maxCap"));
        maxCap->setGeometry(QRect(20, 150, 101, 17));
        size = new QLineEdit(modifyProjectPage);
        size->setObjectName(QStringLiteral("size"));
        size->setGeometry(QRect(20, 170, 113, 27));
        descrp = new QLabel(modifyProjectPage);
        descrp->setObjectName(QStringLiteral("descrp"));
        descrp->setGeometry(QRect(20, 80, 131, 17));
        modifyProjectDescription = new QTextBrowser(modifyProjectPage);
        modifyProjectDescription->setObjectName(QStringLiteral("modifyProjectDescription"));
        modifyProjectDescription->setGeometry(QRect(20, 10, 141, 41));
        modifyDescrp = new QTextEdit(modifyProjectPage);
        modifyDescrp->setObjectName(QStringLiteral("modifyDescrp"));
        modifyDescrp->setGeometry(QRect(20, 100, 191, 51));
        widget = new QWidget(modifyProjectPage);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(210, 260, 178, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        updateButton = new QPushButton(widget);
        updateButton->setObjectName(QStringLiteral("updateButton"));

        horizontalLayout->addWidget(updateButton);


        retranslateUi(modifyProjectPage);

        QMetaObject::connectSlotsByName(modifyProjectPage);
    } // setupUi

    void retranslateUi(QWidget *modifyProjectPage)
    {
        modifyProjectPage->setWindowTitle(QApplication::translate("modifyProjectPage", "Form", 0));
        maxCap->setText(QApplication::translate("modifyProjectPage", "Max. Capacity", 0));
        descrp->setText(QApplication::translate("modifyProjectPage", "Name/Description", 0));
        modifyProjectDescription->setHtml(QApplication::translate("modifyProjectPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Modify Project</span></p></body></html>", 0));
        cancelButton->setText(QApplication::translate("modifyProjectPage", "Cancel", 0));
        updateButton->setText(QApplication::translate("modifyProjectPage", "Update", 0));
    } // retranslateUi

};

namespace Ui {
    class modifyProjectPage: public Ui_modifyProjectPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYPROJECTPAGE_H
