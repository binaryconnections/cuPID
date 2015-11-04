/********************************************************************************
** Form generated from reading UI file 'preferencepage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCEPAGE_H
#define UI_PREFERENCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_preferencePage
{
public:
    QLabel *prereqLabel;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QLabel *APELabel;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QLabel *workloadLabel;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QLabel *outcomeLabel;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_28;
    QLabel *sleepLabel;
    QRadioButton *radioButton_29;
    QRadioButton *radioButton_30;
    QRadioButton *radioButton_31;
    QLabel *proximityLabel;
    QRadioButton *radioButton_32;
    QRadioButton *radioButton_33;
    QRadioButton *radioButton_34;
    QLabel *commSkillsLabel;
    QRadioButton *radioButton_35;
    QRadioButton *radioButton_36;
    QRadioButton *radioButton_37;
    QLabel *agreeLabel;
    QRadioButton *radioButton_38;
    QRadioButton *radioButton_39;
    QRadioButton *radioButton_40;
    QLabel *problemLabel;
    QRadioButton *radioButton_41;
    QRadioButton *radioButton_42;
    QRadioButton *radioButton_43;
    QLabel *punctualLabel;
    QRadioButton *radioButton_44;
    QRadioButton *radioButton_45;
    QRadioButton *radioButton_46;
    QRadioButton *radioButton_47;
    QLabel *initiativeLabel;
    QRadioButton *radioButton_48;
    QRadioButton *radioButton_49;
    QRadioButton *radioButton_50;
    QRadioButton *radioButton_51;
    QLabel *reliableLabel;
    QRadioButton *radioButton_52;
    QRadioButton *radioButton_53;
    QRadioButton *radioButton_54;
    QRadioButton *radioButton_55;
    QLabel *organizedLabel;
    QRadioButton *radioButton_56;
    QRadioButton *radioButton_57;
    QRadioButton *radioButton_58;
    QRadioButton *radioButton_15;
    QRadioButton *radioButton_19;
    QLabel *gpaLabel;
    QRadioButton *radioButton_22;
    QDialogButtonBox *buttonBox;
    QTextBrowser *preferenceLabel;
    QLabel *collabLabel;
    QRadioButton *radioButton_59;
    QRadioButton *radioButton_60;
    QRadioButton *radioButton_61;
    QRadioButton *radioButton_23;
    QButtonGroup *sleepButtonGroup;
    QButtonGroup *agreeabilityButtonGroup;
    QButtonGroup *apeButtonGroup;
    QButtonGroup *organizedButtonGroup;
    QButtonGroup *proximityButtonGroup;
    QButtonGroup *problemSolvingButtonGroup;
    QButtonGroup *reliableButtonGroup;
    QButtonGroup *commSkillsButtonGroup;
    QButtonGroup *collabButtonGroup;
    QButtonGroup *outcomeButtonGroup;
    QButtonGroup *punctualityButtonGroup;
    QButtonGroup *initiativeButtonGroup;
    QButtonGroup *prereqButtonGroup;
    QButtonGroup *workloadButtonGroup;
    QButtonGroup *gpaButtonGroup;

    void setupUi(QWidget *preferencePage)
    {
        if (preferencePage->objectName().isEmpty())
            preferencePage->setObjectName(QStringLiteral("preferencePage"));
        preferencePage->resize(591, 706);
        prereqLabel = new QLabel(preferencePage);
        prereqLabel->setObjectName(QStringLiteral("prereqLabel"));
        prereqLabel->setGeometry(QRect(10, 100, 131, 17));
        radioButton = new QRadioButton(preferencePage);
        prereqButtonGroup = new QButtonGroup(preferencePage);
        prereqButtonGroup->setObjectName(QStringLiteral("prereqButtonGroup"));
        prereqButtonGroup->addButton(radioButton);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 120, 117, 22));
        radioButton_2 = new QRadioButton(preferencePage);
        prereqButtonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(150, 120, 117, 22));
        radioButton_3 = new QRadioButton(preferencePage);
        prereqButtonGroup->addButton(radioButton_3);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(410, 120, 117, 22));
        radioButton_4 = new QRadioButton(preferencePage);
        prereqButtonGroup->addButton(radioButton_4);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(280, 120, 117, 22));
        radioButton_5 = new QRadioButton(preferencePage);
        apeButtonGroup = new QButtonGroup(preferencePage);
        apeButtonGroup->setObjectName(QStringLiteral("apeButtonGroup"));
        apeButtonGroup->addButton(radioButton_5);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(10, 160, 117, 22));
        APELabel = new QLabel(preferencePage);
        APELabel->setObjectName(QStringLiteral("APELabel"));
        APELabel->setGeometry(QRect(10, 140, 131, 17));
        radioButton_6 = new QRadioButton(preferencePage);
        apeButtonGroup->addButton(radioButton_6);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(150, 160, 117, 22));
        radioButton_7 = new QRadioButton(preferencePage);
        apeButtonGroup->addButton(radioButton_7);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setGeometry(QRect(280, 160, 131, 22));
        radioButton_8 = new QRadioButton(preferencePage);
        workloadButtonGroup = new QButtonGroup(preferencePage);
        workloadButtonGroup->setObjectName(QStringLiteral("workloadButtonGroup"));
        workloadButtonGroup->addButton(radioButton_8);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        radioButton_8->setGeometry(QRect(10, 200, 117, 22));
        workloadLabel = new QLabel(preferencePage);
        workloadLabel->setObjectName(QStringLiteral("workloadLabel"));
        workloadLabel->setGeometry(QRect(10, 180, 131, 17));
        radioButton_9 = new QRadioButton(preferencePage);
        workloadButtonGroup->addButton(radioButton_9);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));
        radioButton_9->setGeometry(QRect(150, 200, 117, 22));
        radioButton_10 = new QRadioButton(preferencePage);
        workloadButtonGroup->addButton(radioButton_10);
        radioButton_10->setObjectName(QStringLiteral("radioButton_10"));
        radioButton_10->setGeometry(QRect(280, 200, 117, 22));
        radioButton_11 = new QRadioButton(preferencePage);
        outcomeButtonGroup = new QButtonGroup(preferencePage);
        outcomeButtonGroup->setObjectName(QStringLiteral("outcomeButtonGroup"));
        outcomeButtonGroup->addButton(radioButton_11);
        radioButton_11->setObjectName(QStringLiteral("radioButton_11"));
        radioButton_11->setGeometry(QRect(10, 240, 117, 22));
        outcomeLabel = new QLabel(preferencePage);
        outcomeLabel->setObjectName(QStringLiteral("outcomeLabel"));
        outcomeLabel->setGeometry(QRect(10, 220, 191, 17));
        radioButton_12 = new QRadioButton(preferencePage);
        outcomeButtonGroup->addButton(radioButton_12);
        radioButton_12->setObjectName(QStringLiteral("radioButton_12"));
        radioButton_12->setGeometry(QRect(150, 240, 117, 22));
        radioButton_13 = new QRadioButton(preferencePage);
        outcomeButtonGroup->addButton(radioButton_13);
        radioButton_13->setObjectName(QStringLiteral("radioButton_13"));
        radioButton_13->setGeometry(QRect(280, 240, 117, 22));
        radioButton_14 = new QRadioButton(preferencePage);
        outcomeButtonGroup->addButton(radioButton_14);
        radioButton_14->setObjectName(QStringLiteral("radioButton_14"));
        radioButton_14->setGeometry(QRect(410, 240, 117, 22));
        radioButton_28 = new QRadioButton(preferencePage);
        sleepButtonGroup = new QButtonGroup(preferencePage);
        sleepButtonGroup->setObjectName(QStringLiteral("sleepButtonGroup"));
        sleepButtonGroup->addButton(radioButton_28);
        radioButton_28->setObjectName(QStringLiteral("radioButton_28"));
        radioButton_28->setGeometry(QRect(10, 280, 117, 22));
        sleepLabel = new QLabel(preferencePage);
        sleepLabel->setObjectName(QStringLiteral("sleepLabel"));
        sleepLabel->setGeometry(QRect(10, 260, 131, 17));
        radioButton_29 = new QRadioButton(preferencePage);
        sleepButtonGroup->addButton(radioButton_29);
        radioButton_29->setObjectName(QStringLiteral("radioButton_29"));
        radioButton_29->setGeometry(QRect(150, 280, 117, 22));
        radioButton_30 = new QRadioButton(preferencePage);
        sleepButtonGroup->addButton(radioButton_30);
        radioButton_30->setObjectName(QStringLiteral("radioButton_30"));
        radioButton_30->setGeometry(QRect(280, 280, 117, 22));
        radioButton_31 = new QRadioButton(preferencePage);
        proximityButtonGroup = new QButtonGroup(preferencePage);
        proximityButtonGroup->setObjectName(QStringLiteral("proximityButtonGroup"));
        proximityButtonGroup->addButton(radioButton_31);
        radioButton_31->setObjectName(QStringLiteral("radioButton_31"));
        radioButton_31->setGeometry(QRect(10, 320, 141, 22));
        proximityLabel = new QLabel(preferencePage);
        proximityLabel->setObjectName(QStringLiteral("proximityLabel"));
        proximityLabel->setGeometry(QRect(10, 300, 131, 17));
        radioButton_32 = new QRadioButton(preferencePage);
        proximityButtonGroup->addButton(radioButton_32);
        radioButton_32->setObjectName(QStringLiteral("radioButton_32"));
        radioButton_32->setGeometry(QRect(150, 320, 117, 22));
        radioButton_33 = new QRadioButton(preferencePage);
        proximityButtonGroup->addButton(radioButton_33);
        radioButton_33->setObjectName(QStringLiteral("radioButton_33"));
        radioButton_33->setGeometry(QRect(280, 320, 117, 22));
        radioButton_34 = new QRadioButton(preferencePage);
        commSkillsButtonGroup = new QButtonGroup(preferencePage);
        commSkillsButtonGroup->setObjectName(QStringLiteral("commSkillsButtonGroup"));
        commSkillsButtonGroup->addButton(radioButton_34);
        radioButton_34->setObjectName(QStringLiteral("radioButton_34"));
        radioButton_34->setGeometry(QRect(10, 360, 117, 22));
        commSkillsLabel = new QLabel(preferencePage);
        commSkillsLabel->setObjectName(QStringLiteral("commSkillsLabel"));
        commSkillsLabel->setGeometry(QRect(10, 340, 151, 17));
        radioButton_35 = new QRadioButton(preferencePage);
        commSkillsButtonGroup->addButton(radioButton_35);
        radioButton_35->setObjectName(QStringLiteral("radioButton_35"));
        radioButton_35->setGeometry(QRect(150, 360, 117, 22));
        radioButton_36 = new QRadioButton(preferencePage);
        commSkillsButtonGroup->addButton(radioButton_36);
        radioButton_36->setObjectName(QStringLiteral("radioButton_36"));
        radioButton_36->setGeometry(QRect(280, 360, 117, 22));
        radioButton_37 = new QRadioButton(preferencePage);
        agreeabilityButtonGroup = new QButtonGroup(preferencePage);
        agreeabilityButtonGroup->setObjectName(QStringLiteral("agreeabilityButtonGroup"));
        agreeabilityButtonGroup->addButton(radioButton_37);
        radioButton_37->setObjectName(QStringLiteral("radioButton_37"));
        radioButton_37->setGeometry(QRect(10, 400, 117, 22));
        agreeLabel = new QLabel(preferencePage);
        agreeLabel->setObjectName(QStringLiteral("agreeLabel"));
        agreeLabel->setGeometry(QRect(10, 380, 131, 17));
        radioButton_38 = new QRadioButton(preferencePage);
        agreeabilityButtonGroup->addButton(radioButton_38);
        radioButton_38->setObjectName(QStringLiteral("radioButton_38"));
        radioButton_38->setGeometry(QRect(150, 400, 117, 22));
        radioButton_39 = new QRadioButton(preferencePage);
        agreeabilityButtonGroup->addButton(radioButton_39);
        radioButton_39->setObjectName(QStringLiteral("radioButton_39"));
        radioButton_39->setGeometry(QRect(280, 400, 117, 22));
        radioButton_40 = new QRadioButton(preferencePage);
        problemSolvingButtonGroup = new QButtonGroup(preferencePage);
        problemSolvingButtonGroup->setObjectName(QStringLiteral("problemSolvingButtonGroup"));
        problemSolvingButtonGroup->addButton(radioButton_40);
        radioButton_40->setObjectName(QStringLiteral("radioButton_40"));
        radioButton_40->setGeometry(QRect(10, 440, 117, 22));
        problemLabel = new QLabel(preferencePage);
        problemLabel->setObjectName(QStringLiteral("problemLabel"));
        problemLabel->setGeometry(QRect(10, 420, 151, 17));
        radioButton_41 = new QRadioButton(preferencePage);
        problemSolvingButtonGroup->addButton(radioButton_41);
        radioButton_41->setObjectName(QStringLiteral("radioButton_41"));
        radioButton_41->setGeometry(QRect(150, 440, 117, 22));
        radioButton_42 = new QRadioButton(preferencePage);
        problemSolvingButtonGroup->addButton(radioButton_42);
        radioButton_42->setObjectName(QStringLiteral("radioButton_42"));
        radioButton_42->setGeometry(QRect(280, 440, 117, 22));
        radioButton_43 = new QRadioButton(preferencePage);
        punctualityButtonGroup = new QButtonGroup(preferencePage);
        punctualityButtonGroup->setObjectName(QStringLiteral("punctualityButtonGroup"));
        punctualityButtonGroup->addButton(radioButton_43);
        radioButton_43->setObjectName(QStringLiteral("radioButton_43"));
        radioButton_43->setGeometry(QRect(10, 480, 117, 22));
        punctualLabel = new QLabel(preferencePage);
        punctualLabel->setObjectName(QStringLiteral("punctualLabel"));
        punctualLabel->setGeometry(QRect(10, 460, 131, 17));
        radioButton_44 = new QRadioButton(preferencePage);
        punctualityButtonGroup->addButton(radioButton_44);
        radioButton_44->setObjectName(QStringLiteral("radioButton_44"));
        radioButton_44->setGeometry(QRect(150, 480, 117, 22));
        radioButton_45 = new QRadioButton(preferencePage);
        punctualityButtonGroup->addButton(radioButton_45);
        radioButton_45->setObjectName(QStringLiteral("radioButton_45"));
        radioButton_45->setGeometry(QRect(280, 480, 117, 22));
        radioButton_46 = new QRadioButton(preferencePage);
        punctualityButtonGroup->addButton(radioButton_46);
        radioButton_46->setObjectName(QStringLiteral("radioButton_46"));
        radioButton_46->setGeometry(QRect(410, 480, 117, 22));
        radioButton_47 = new QRadioButton(preferencePage);
        initiativeButtonGroup = new QButtonGroup(preferencePage);
        initiativeButtonGroup->setObjectName(QStringLiteral("initiativeButtonGroup"));
        initiativeButtonGroup->addButton(radioButton_47);
        radioButton_47->setObjectName(QStringLiteral("radioButton_47"));
        radioButton_47->setGeometry(QRect(10, 520, 117, 22));
        initiativeLabel = new QLabel(preferencePage);
        initiativeLabel->setObjectName(QStringLiteral("initiativeLabel"));
        initiativeLabel->setGeometry(QRect(10, 500, 131, 17));
        radioButton_48 = new QRadioButton(preferencePage);
        initiativeButtonGroup->addButton(radioButton_48);
        radioButton_48->setObjectName(QStringLiteral("radioButton_48"));
        radioButton_48->setGeometry(QRect(150, 520, 117, 22));
        radioButton_49 = new QRadioButton(preferencePage);
        initiativeButtonGroup->addButton(radioButton_49);
        radioButton_49->setObjectName(QStringLiteral("radioButton_49"));
        radioButton_49->setGeometry(QRect(280, 520, 117, 22));
        radioButton_50 = new QRadioButton(preferencePage);
        initiativeButtonGroup->addButton(radioButton_50);
        radioButton_50->setObjectName(QStringLiteral("radioButton_50"));
        radioButton_50->setGeometry(QRect(410, 520, 117, 22));
        radioButton_51 = new QRadioButton(preferencePage);
        reliableButtonGroup = new QButtonGroup(preferencePage);
        reliableButtonGroup->setObjectName(QStringLiteral("reliableButtonGroup"));
        reliableButtonGroup->addButton(radioButton_51);
        radioButton_51->setObjectName(QStringLiteral("radioButton_51"));
        radioButton_51->setGeometry(QRect(10, 560, 117, 22));
        reliableLabel = new QLabel(preferencePage);
        reliableLabel->setObjectName(QStringLiteral("reliableLabel"));
        reliableLabel->setGeometry(QRect(10, 540, 131, 17));
        radioButton_52 = new QRadioButton(preferencePage);
        reliableButtonGroup->addButton(radioButton_52);
        radioButton_52->setObjectName(QStringLiteral("radioButton_52"));
        radioButton_52->setGeometry(QRect(150, 560, 117, 22));
        radioButton_53 = new QRadioButton(preferencePage);
        reliableButtonGroup->addButton(radioButton_53);
        radioButton_53->setObjectName(QStringLiteral("radioButton_53"));
        radioButton_53->setGeometry(QRect(280, 560, 117, 22));
        radioButton_54 = new QRadioButton(preferencePage);
        reliableButtonGroup->addButton(radioButton_54);
        radioButton_54->setObjectName(QStringLiteral("radioButton_54"));
        radioButton_54->setGeometry(QRect(410, 560, 117, 22));
        radioButton_55 = new QRadioButton(preferencePage);
        organizedButtonGroup = new QButtonGroup(preferencePage);
        organizedButtonGroup->setObjectName(QStringLiteral("organizedButtonGroup"));
        organizedButtonGroup->addButton(radioButton_55);
        radioButton_55->setObjectName(QStringLiteral("radioButton_55"));
        radioButton_55->setGeometry(QRect(10, 600, 117, 22));
        organizedLabel = new QLabel(preferencePage);
        organizedLabel->setObjectName(QStringLiteral("organizedLabel"));
        organizedLabel->setGeometry(QRect(10, 580, 131, 17));
        radioButton_56 = new QRadioButton(preferencePage);
        organizedButtonGroup->addButton(radioButton_56);
        radioButton_56->setObjectName(QStringLiteral("radioButton_56"));
        radioButton_56->setGeometry(QRect(150, 600, 117, 22));
        radioButton_57 = new QRadioButton(preferencePage);
        organizedButtonGroup->addButton(radioButton_57);
        radioButton_57->setObjectName(QStringLiteral("radioButton_57"));
        radioButton_57->setGeometry(QRect(280, 600, 117, 22));
        radioButton_58 = new QRadioButton(preferencePage);
        organizedButtonGroup->addButton(radioButton_58);
        radioButton_58->setObjectName(QStringLiteral("radioButton_58"));
        radioButton_58->setGeometry(QRect(410, 600, 117, 22));
        radioButton_15 = new QRadioButton(preferencePage);
        gpaButtonGroup = new QButtonGroup(preferencePage);
        gpaButtonGroup->setObjectName(QStringLiteral("gpaButtonGroup"));
        gpaButtonGroup->addButton(radioButton_15);
        radioButton_15->setObjectName(QStringLiteral("radioButton_15"));
        radioButton_15->setGeometry(QRect(10, 80, 61, 22));
        radioButton_19 = new QRadioButton(preferencePage);
        gpaButtonGroup->addButton(radioButton_19);
        radioButton_19->setObjectName(QStringLiteral("radioButton_19"));
        radioButton_19->setGeometry(QRect(150, 80, 51, 22));
        gpaLabel = new QLabel(preferencePage);
        gpaLabel->setObjectName(QStringLiteral("gpaLabel"));
        gpaLabel->setGeometry(QRect(10, 60, 131, 17));
        radioButton_22 = new QRadioButton(preferencePage);
        gpaButtonGroup->addButton(radioButton_22);
        radioButton_22->setObjectName(QStringLiteral("radioButton_22"));
        radioButton_22->setGeometry(QRect(280, 80, 61, 22));
        buttonBox = new QDialogButtonBox(preferencePage);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(390, 670, 176, 27));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        preferenceLabel = new QTextBrowser(preferencePage);
        preferenceLabel->setObjectName(QStringLiteral("preferenceLabel"));
        preferenceLabel->setGeometry(QRect(10, 10, 191, 41));
        collabLabel = new QLabel(preferencePage);
        collabLabel->setObjectName(QStringLiteral("collabLabel"));
        collabLabel->setGeometry(QRect(10, 620, 241, 17));
        radioButton_59 = new QRadioButton(preferencePage);
        collabButtonGroup = new QButtonGroup(preferencePage);
        collabButtonGroup->setObjectName(QStringLiteral("collabButtonGroup"));
        collabButtonGroup->addButton(radioButton_59);
        radioButton_59->setObjectName(QStringLiteral("radioButton_59"));
        radioButton_59->setGeometry(QRect(10, 640, 117, 22));
        radioButton_60 = new QRadioButton(preferencePage);
        collabButtonGroup->addButton(radioButton_60);
        radioButton_60->setObjectName(QStringLiteral("radioButton_60"));
        radioButton_60->setGeometry(QRect(150, 640, 117, 22));
        radioButton_61 = new QRadioButton(preferencePage);
        collabButtonGroup->addButton(radioButton_61);
        radioButton_61->setObjectName(QStringLiteral("radioButton_61"));
        radioButton_61->setGeometry(QRect(280, 640, 117, 22));
        radioButton_23 = new QRadioButton(preferencePage);
        gpaButtonGroup->addButton(radioButton_23);
        radioButton_23->setObjectName(QStringLiteral("radioButton_23"));
        radioButton_23->setGeometry(QRect(410, 80, 71, 22));

        retranslateUi(preferencePage);

        QMetaObject::connectSlotsByName(preferencePage);
    } // setupUi

    void retranslateUi(QWidget *preferencePage)
    {
        preferencePage->setWindowTitle(QApplication::translate("preferencePage", "Form", 0));
        prereqLabel->setText(QApplication::translate("preferencePage", "Prerequisite Grade", 0));
        radioButton->setText(QApplication::translate("preferencePage", "D,s", 0));
        radioButton_2->setText(QApplication::translate("preferencePage", "C's", 0));
        radioButton_3->setText(QApplication::translate("preferencePage", "A's", 0));
        radioButton_4->setText(QApplication::translate("preferencePage", "B's", 0));
        radioButton_5->setText(QApplication::translate("preferencePage", "Suspended", 0));
        APELabel->setText(QApplication::translate("preferencePage", "APE Standing", 0));
        radioButton_6->setText(QApplication::translate("preferencePage", "Warning", 0));
        radioButton_7->setText(QApplication::translate("preferencePage", "Good Standing", 0));
        radioButton_8->setText(QApplication::translate("preferencePage", "Overload", 0));
        workloadLabel->setText(QApplication::translate("preferencePage", "Workload", 0));
        radioButton_9->setText(QApplication::translate("preferencePage", "Full-time", 0));
        radioButton_10->setText(QApplication::translate("preferencePage", "Part-time", 0));
        radioButton_11->setText(QApplication::translate("preferencePage", "D,s", 0));
        outcomeLabel->setText(QApplication::translate("preferencePage", "Desired outcome in course", 0));
        radioButton_12->setText(QApplication::translate("preferencePage", "C's", 0));
        radioButton_13->setText(QApplication::translate("preferencePage", "B's", 0));
        radioButton_14->setText(QApplication::translate("preferencePage", "A's", 0));
        radioButton_28->setText(QApplication::translate("preferencePage", "Sporadic", 0));
        sleepLabel->setText(QApplication::translate("preferencePage", "Sleeping habits", 0));
        radioButton_29->setText(QApplication::translate("preferencePage", "Night owl", 0));
        radioButton_30->setText(QApplication::translate("preferencePage", "Early bird", 0));
        radioButton_31->setText(QApplication::translate("preferencePage", "Distant Student", 0));
        proximityLabel->setText(QApplication::translate("preferencePage", "Proximity", 0));
        radioButton_32->setText(QApplication::translate("preferencePage", "Off-campus", 0));
        radioButton_33->setText(QApplication::translate("preferencePage", "On-campus", 0));
        radioButton_34->setText(QApplication::translate("preferencePage", "Weak", 0));
        commSkillsLabel->setText(QApplication::translate("preferencePage", "Communication skills", 0));
        radioButton_35->setText(QApplication::translate("preferencePage", "Average", 0));
        radioButton_36->setText(QApplication::translate("preferencePage", "Strong", 0));
        radioButton_37->setText(QApplication::translate("preferencePage", "Low", 0));
        agreeLabel->setText(QApplication::translate("preferencePage", "Agreeability", 0));
        radioButton_38->setText(QApplication::translate("preferencePage", "Medium", 0));
        radioButton_39->setText(QApplication::translate("preferencePage", "High", 0));
        radioButton_40->setText(QApplication::translate("preferencePage", "Weak", 0));
        problemLabel->setText(QApplication::translate("preferencePage", "Problem solving skills", 0));
        radioButton_41->setText(QApplication::translate("preferencePage", "Average", 0));
        radioButton_42->setText(QApplication::translate("preferencePage", "Strong", 0));
        radioButton_43->setText(QApplication::translate("preferencePage", "Never", 0));
        punctualLabel->setText(QApplication::translate("preferencePage", "Punctual", 0));
        radioButton_44->setText(QApplication::translate("preferencePage", "Sometimes", 0));
        radioButton_45->setText(QApplication::translate("preferencePage", "Often", 0));
        radioButton_46->setText(QApplication::translate("preferencePage", "Always", 0));
        radioButton_47->setText(QApplication::translate("preferencePage", "Never", 0));
        initiativeLabel->setText(QApplication::translate("preferencePage", "Takes initiative", 0));
        radioButton_48->setText(QApplication::translate("preferencePage", "Sometimes", 0));
        radioButton_49->setText(QApplication::translate("preferencePage", "Often", 0));
        radioButton_50->setText(QApplication::translate("preferencePage", "Always", 0));
        radioButton_51->setText(QApplication::translate("preferencePage", "Not Very", 0));
        reliableLabel->setText(QApplication::translate("preferencePage", "Reliable", 0));
        radioButton_52->setText(QApplication::translate("preferencePage", "Somewhat", 0));
        radioButton_53->setText(QApplication::translate("preferencePage", "Mostly", 0));
        radioButton_54->setText(QApplication::translate("preferencePage", "Very", 0));
        radioButton_55->setText(QApplication::translate("preferencePage", "Not Very", 0));
        organizedLabel->setText(QApplication::translate("preferencePage", "Organized", 0));
        radioButton_56->setText(QApplication::translate("preferencePage", "Somewhat", 0));
        radioButton_57->setText(QApplication::translate("preferencePage", "Mostly", 0));
        radioButton_58->setText(QApplication::translate("preferencePage", "Very", 0));
        radioButton_15->setText(QApplication::translate("preferencePage", "1-3", 0));
        radioButton_19->setText(QApplication::translate("preferencePage", "4-6", 0));
        gpaLabel->setText(QApplication::translate("preferencePage", "GPA", 0));
        radioButton_22->setText(QApplication::translate("preferencePage", "7-9", 0));
        preferenceLabel->setHtml(QApplication::translate("preferencePage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Partner Preferences</span></p></body></html>", 0));
        collabLabel->setText(QApplication::translate("preferencePage", "Previous Collaboration Experience", 0));
        radioButton_59->setText(QApplication::translate("preferencePage", "None", 0));
        radioButton_60->setText(QApplication::translate("preferencePage", "Little", 0));
        radioButton_61->setText(QApplication::translate("preferencePage", "Plenty", 0));
        radioButton_23->setText(QApplication::translate("preferencePage", "10-12", 0));
    } // retranslateUi

};

namespace Ui {
    class preferencePage: public Ui_preferencePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCEPAGE_H
