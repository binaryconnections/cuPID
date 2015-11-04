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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_preferencePage
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *gpaLabel;
    QRadioButton *gpaButton1;
    QRadioButton *gpaButton2;
    QRadioButton *gpaButton3;
    QRadioButton *gpaButton4;
    QLabel *prereqLabel;
    QRadioButton *prereqButton1;
    QRadioButton *prereqButton2;
    QRadioButton *prereqButton3;
    QRadioButton *prereqButton4;
    QLabel *APELabel;
    QRadioButton *apeButton1;
    QRadioButton *apeButton2;
    QRadioButton *apeButton3;
    QLabel *workloadLabel;
    QRadioButton *workLoadButton1;
    QRadioButton *workLoadButton2;
    QRadioButton *workLoadButton3;
    QLabel *outcomeLabel;
    QRadioButton *outcomeButton1;
    QRadioButton *outcomeButton2;
    QRadioButton *outcomeButton3;
    QRadioButton *outcomeButton4;
    QLabel *sleepLabel;
    QRadioButton *sleepButton1;
    QRadioButton *sleepButton2;
    QRadioButton *sleepButton3;
    QLabel *proximityLabel;
    QRadioButton *proxiButton1;
    QRadioButton *proxiButton2;
    QRadioButton *proxiButton3;
    QLabel *commSkillsLabel;
    QRadioButton *commButton1;
    QRadioButton *commButton2;
    QRadioButton *commButton3;
    QLabel *agreeLabel;
    QRadioButton *agreeButton1;
    QRadioButton *agreeButton2;
    QRadioButton *agreeButton3;
    QLabel *problemLabel;
    QRadioButton *problemButton1;
    QRadioButton *problemButton2;
    QRadioButton *problemButton3;
    QLabel *punctualLabel;
    QRadioButton *punctualButton1;
    QRadioButton *punctualButton2;
    QRadioButton *punctualButton3;
    QRadioButton *punctualButton4;
    QLabel *initiativeLabel;
    QRadioButton *initButton1;
    QRadioButton *initButton2;
    QRadioButton *initButton3;
    QRadioButton *initButton4;
    QLabel *reliableLabel;
    QRadioButton *reliableButton1;
    QRadioButton *reliableButton2;
    QRadioButton *reliableButton3;
    QRadioButton *reliableButton4;
    QLabel *organizedLabel;
    QRadioButton *organizedButton1;
    QRadioButton *organizedButton2;
    QRadioButton *organizedButton3;
    QRadioButton *organizedButton4;
    QLabel *collabLabel;
    QRadioButton *collabButton1;
    QRadioButton *collabButton2;
    QRadioButton *collabButton3;
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;
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
        preferencePage->resize(475, 563);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(preferencePage->sizePolicy().hasHeightForWidth());
        preferencePage->setSizePolicy(sizePolicy);
        scrollArea = new QScrollArea(preferencePage);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 62, 455, 491));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 437, 1846));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gpaLabel = new QLabel(scrollAreaWidgetContents);
        gpaLabel->setObjectName(QStringLiteral("gpaLabel"));

        verticalLayout_2->addWidget(gpaLabel);

        gpaButton1 = new QRadioButton(scrollAreaWidgetContents);
        gpaButtonGroup = new QButtonGroup(preferencePage);
        gpaButtonGroup->setObjectName(QStringLiteral("gpaButtonGroup"));
        gpaButtonGroup->addButton(gpaButton1);
        gpaButton1->setObjectName(QStringLiteral("gpaButton1"));

        verticalLayout_2->addWidget(gpaButton1);

        gpaButton2 = new QRadioButton(scrollAreaWidgetContents);
        gpaButtonGroup->addButton(gpaButton2);
        gpaButton2->setObjectName(QStringLiteral("gpaButton2"));

        verticalLayout_2->addWidget(gpaButton2);

        gpaButton3 = new QRadioButton(scrollAreaWidgetContents);
        gpaButtonGroup->addButton(gpaButton3);
        gpaButton3->setObjectName(QStringLiteral("gpaButton3"));

        verticalLayout_2->addWidget(gpaButton3);

        gpaButton4 = new QRadioButton(scrollAreaWidgetContents);
        gpaButtonGroup->addButton(gpaButton4);
        gpaButton4->setObjectName(QStringLiteral("gpaButton4"));

        verticalLayout_2->addWidget(gpaButton4);

        prereqLabel = new QLabel(scrollAreaWidgetContents);
        prereqLabel->setObjectName(QStringLiteral("prereqLabel"));

        verticalLayout_2->addWidget(prereqLabel);

        prereqButton1 = new QRadioButton(scrollAreaWidgetContents);
        prereqButtonGroup = new QButtonGroup(preferencePage);
        prereqButtonGroup->setObjectName(QStringLiteral("prereqButtonGroup"));
        prereqButtonGroup->addButton(prereqButton1);
        prereqButton1->setObjectName(QStringLiteral("prereqButton1"));

        verticalLayout_2->addWidget(prereqButton1);

        prereqButton2 = new QRadioButton(scrollAreaWidgetContents);
        prereqButtonGroup->addButton(prereqButton2);
        prereqButton2->setObjectName(QStringLiteral("prereqButton2"));

        verticalLayout_2->addWidget(prereqButton2);

        prereqButton3 = new QRadioButton(scrollAreaWidgetContents);
        prereqButtonGroup->addButton(prereqButton3);
        prereqButton3->setObjectName(QStringLiteral("prereqButton3"));

        verticalLayout_2->addWidget(prereqButton3);

        prereqButton4 = new QRadioButton(scrollAreaWidgetContents);
        prereqButtonGroup->addButton(prereqButton4);
        prereqButton4->setObjectName(QStringLiteral("prereqButton4"));

        verticalLayout_2->addWidget(prereqButton4);

        APELabel = new QLabel(scrollAreaWidgetContents);
        APELabel->setObjectName(QStringLiteral("APELabel"));

        verticalLayout_2->addWidget(APELabel);

        apeButton1 = new QRadioButton(scrollAreaWidgetContents);
        apeButtonGroup = new QButtonGroup(preferencePage);
        apeButtonGroup->setObjectName(QStringLiteral("apeButtonGroup"));
        apeButtonGroup->addButton(apeButton1);
        apeButton1->setObjectName(QStringLiteral("apeButton1"));

        verticalLayout_2->addWidget(apeButton1);

        apeButton2 = new QRadioButton(scrollAreaWidgetContents);
        apeButtonGroup->addButton(apeButton2);
        apeButton2->setObjectName(QStringLiteral("apeButton2"));

        verticalLayout_2->addWidget(apeButton2);

        apeButton3 = new QRadioButton(scrollAreaWidgetContents);
        apeButtonGroup->addButton(apeButton3);
        apeButton3->setObjectName(QStringLiteral("apeButton3"));

        verticalLayout_2->addWidget(apeButton3);

        workloadLabel = new QLabel(scrollAreaWidgetContents);
        workloadLabel->setObjectName(QStringLiteral("workloadLabel"));

        verticalLayout_2->addWidget(workloadLabel);

        workLoadButton1 = new QRadioButton(scrollAreaWidgetContents);
        workloadButtonGroup = new QButtonGroup(preferencePage);
        workloadButtonGroup->setObjectName(QStringLiteral("workloadButtonGroup"));
        workloadButtonGroup->addButton(workLoadButton1);
        workLoadButton1->setObjectName(QStringLiteral("workLoadButton1"));

        verticalLayout_2->addWidget(workLoadButton1);

        workLoadButton2 = new QRadioButton(scrollAreaWidgetContents);
        workloadButtonGroup->addButton(workLoadButton2);
        workLoadButton2->setObjectName(QStringLiteral("workLoadButton2"));

        verticalLayout_2->addWidget(workLoadButton2);

        workLoadButton3 = new QRadioButton(scrollAreaWidgetContents);
        workloadButtonGroup->addButton(workLoadButton3);
        workLoadButton3->setObjectName(QStringLiteral("workLoadButton3"));

        verticalLayout_2->addWidget(workLoadButton3);

        outcomeLabel = new QLabel(scrollAreaWidgetContents);
        outcomeLabel->setObjectName(QStringLiteral("outcomeLabel"));

        verticalLayout_2->addWidget(outcomeLabel);

        outcomeButton1 = new QRadioButton(scrollAreaWidgetContents);
        outcomeButtonGroup = new QButtonGroup(preferencePage);
        outcomeButtonGroup->setObjectName(QStringLiteral("outcomeButtonGroup"));
        outcomeButtonGroup->addButton(outcomeButton1);
        outcomeButton1->setObjectName(QStringLiteral("outcomeButton1"));

        verticalLayout_2->addWidget(outcomeButton1);

        outcomeButton2 = new QRadioButton(scrollAreaWidgetContents);
        outcomeButtonGroup->addButton(outcomeButton2);
        outcomeButton2->setObjectName(QStringLiteral("outcomeButton2"));

        verticalLayout_2->addWidget(outcomeButton2);

        outcomeButton3 = new QRadioButton(scrollAreaWidgetContents);
        outcomeButtonGroup->addButton(outcomeButton3);
        outcomeButton3->setObjectName(QStringLiteral("outcomeButton3"));

        verticalLayout_2->addWidget(outcomeButton3);

        outcomeButton4 = new QRadioButton(scrollAreaWidgetContents);
        outcomeButtonGroup->addButton(outcomeButton4);
        outcomeButton4->setObjectName(QStringLiteral("outcomeButton4"));

        verticalLayout_2->addWidget(outcomeButton4);

        sleepLabel = new QLabel(scrollAreaWidgetContents);
        sleepLabel->setObjectName(QStringLiteral("sleepLabel"));

        verticalLayout_2->addWidget(sleepLabel);

        sleepButton1 = new QRadioButton(scrollAreaWidgetContents);
        sleepButtonGroup = new QButtonGroup(preferencePage);
        sleepButtonGroup->setObjectName(QStringLiteral("sleepButtonGroup"));
        sleepButtonGroup->addButton(sleepButton1);
        sleepButton1->setObjectName(QStringLiteral("sleepButton1"));

        verticalLayout_2->addWidget(sleepButton1);

        sleepButton2 = new QRadioButton(scrollAreaWidgetContents);
        sleepButtonGroup->addButton(sleepButton2);
        sleepButton2->setObjectName(QStringLiteral("sleepButton2"));

        verticalLayout_2->addWidget(sleepButton2);

        sleepButton3 = new QRadioButton(scrollAreaWidgetContents);
        sleepButtonGroup->addButton(sleepButton3);
        sleepButton3->setObjectName(QStringLiteral("sleepButton3"));

        verticalLayout_2->addWidget(sleepButton3);

        proximityLabel = new QLabel(scrollAreaWidgetContents);
        proximityLabel->setObjectName(QStringLiteral("proximityLabel"));

        verticalLayout_2->addWidget(proximityLabel);

        proxiButton1 = new QRadioButton(scrollAreaWidgetContents);
        proximityButtonGroup = new QButtonGroup(preferencePage);
        proximityButtonGroup->setObjectName(QStringLiteral("proximityButtonGroup"));
        proximityButtonGroup->addButton(proxiButton1);
        proxiButton1->setObjectName(QStringLiteral("proxiButton1"));

        verticalLayout_2->addWidget(proxiButton1);

        proxiButton2 = new QRadioButton(scrollAreaWidgetContents);
        proximityButtonGroup->addButton(proxiButton2);
        proxiButton2->setObjectName(QStringLiteral("proxiButton2"));

        verticalLayout_2->addWidget(proxiButton2);

        proxiButton3 = new QRadioButton(scrollAreaWidgetContents);
        proximityButtonGroup->addButton(proxiButton3);
        proxiButton3->setObjectName(QStringLiteral("proxiButton3"));

        verticalLayout_2->addWidget(proxiButton3);

        commSkillsLabel = new QLabel(scrollAreaWidgetContents);
        commSkillsLabel->setObjectName(QStringLiteral("commSkillsLabel"));

        verticalLayout_2->addWidget(commSkillsLabel);

        commButton1 = new QRadioButton(scrollAreaWidgetContents);
        commSkillsButtonGroup = new QButtonGroup(preferencePage);
        commSkillsButtonGroup->setObjectName(QStringLiteral("commSkillsButtonGroup"));
        commSkillsButtonGroup->addButton(commButton1);
        commButton1->setObjectName(QStringLiteral("commButton1"));

        verticalLayout_2->addWidget(commButton1);

        commButton2 = new QRadioButton(scrollAreaWidgetContents);
        commSkillsButtonGroup->addButton(commButton2);
        commButton2->setObjectName(QStringLiteral("commButton2"));

        verticalLayout_2->addWidget(commButton2);

        commButton3 = new QRadioButton(scrollAreaWidgetContents);
        commSkillsButtonGroup->addButton(commButton3);
        commButton3->setObjectName(QStringLiteral("commButton3"));

        verticalLayout_2->addWidget(commButton3);

        agreeLabel = new QLabel(scrollAreaWidgetContents);
        agreeLabel->setObjectName(QStringLiteral("agreeLabel"));

        verticalLayout_2->addWidget(agreeLabel);

        agreeButton1 = new QRadioButton(scrollAreaWidgetContents);
        agreeabilityButtonGroup = new QButtonGroup(preferencePage);
        agreeabilityButtonGroup->setObjectName(QStringLiteral("agreeabilityButtonGroup"));
        agreeabilityButtonGroup->addButton(agreeButton1);
        agreeButton1->setObjectName(QStringLiteral("agreeButton1"));

        verticalLayout_2->addWidget(agreeButton1);

        agreeButton2 = new QRadioButton(scrollAreaWidgetContents);
        agreeabilityButtonGroup->addButton(agreeButton2);
        agreeButton2->setObjectName(QStringLiteral("agreeButton2"));

        verticalLayout_2->addWidget(agreeButton2);

        agreeButton3 = new QRadioButton(scrollAreaWidgetContents);
        agreeabilityButtonGroup->addButton(agreeButton3);
        agreeButton3->setObjectName(QStringLiteral("agreeButton3"));

        verticalLayout_2->addWidget(agreeButton3);

        problemLabel = new QLabel(scrollAreaWidgetContents);
        problemLabel->setObjectName(QStringLiteral("problemLabel"));

        verticalLayout_2->addWidget(problemLabel);

        problemButton1 = new QRadioButton(scrollAreaWidgetContents);
        problemSolvingButtonGroup = new QButtonGroup(preferencePage);
        problemSolvingButtonGroup->setObjectName(QStringLiteral("problemSolvingButtonGroup"));
        problemSolvingButtonGroup->addButton(problemButton1);
        problemButton1->setObjectName(QStringLiteral("problemButton1"));

        verticalLayout_2->addWidget(problemButton1);

        problemButton2 = new QRadioButton(scrollAreaWidgetContents);
        problemSolvingButtonGroup->addButton(problemButton2);
        problemButton2->setObjectName(QStringLiteral("problemButton2"));

        verticalLayout_2->addWidget(problemButton2);

        problemButton3 = new QRadioButton(scrollAreaWidgetContents);
        problemSolvingButtonGroup->addButton(problemButton3);
        problemButton3->setObjectName(QStringLiteral("problemButton3"));

        verticalLayout_2->addWidget(problemButton3);

        punctualLabel = new QLabel(scrollAreaWidgetContents);
        punctualLabel->setObjectName(QStringLiteral("punctualLabel"));

        verticalLayout_2->addWidget(punctualLabel);

        punctualButton1 = new QRadioButton(scrollAreaWidgetContents);
        punctualityButtonGroup = new QButtonGroup(preferencePage);
        punctualityButtonGroup->setObjectName(QStringLiteral("punctualityButtonGroup"));
        punctualityButtonGroup->addButton(punctualButton1);
        punctualButton1->setObjectName(QStringLiteral("punctualButton1"));

        verticalLayout_2->addWidget(punctualButton1);

        punctualButton2 = new QRadioButton(scrollAreaWidgetContents);
        punctualityButtonGroup->addButton(punctualButton2);
        punctualButton2->setObjectName(QStringLiteral("punctualButton2"));

        verticalLayout_2->addWidget(punctualButton2);

        punctualButton3 = new QRadioButton(scrollAreaWidgetContents);
        punctualityButtonGroup->addButton(punctualButton3);
        punctualButton3->setObjectName(QStringLiteral("punctualButton3"));

        verticalLayout_2->addWidget(punctualButton3);

        punctualButton4 = new QRadioButton(scrollAreaWidgetContents);
        punctualityButtonGroup->addButton(punctualButton4);
        punctualButton4->setObjectName(QStringLiteral("punctualButton4"));

        verticalLayout_2->addWidget(punctualButton4);

        initiativeLabel = new QLabel(scrollAreaWidgetContents);
        initiativeLabel->setObjectName(QStringLiteral("initiativeLabel"));

        verticalLayout_2->addWidget(initiativeLabel);

        initButton1 = new QRadioButton(scrollAreaWidgetContents);
        initiativeButtonGroup = new QButtonGroup(preferencePage);
        initiativeButtonGroup->setObjectName(QStringLiteral("initiativeButtonGroup"));
        initiativeButtonGroup->addButton(initButton1);
        initButton1->setObjectName(QStringLiteral("initButton1"));

        verticalLayout_2->addWidget(initButton1);

        initButton2 = new QRadioButton(scrollAreaWidgetContents);
        initiativeButtonGroup->addButton(initButton2);
        initButton2->setObjectName(QStringLiteral("initButton2"));

        verticalLayout_2->addWidget(initButton2);

        initButton3 = new QRadioButton(scrollAreaWidgetContents);
        initiativeButtonGroup->addButton(initButton3);
        initButton3->setObjectName(QStringLiteral("initButton3"));

        verticalLayout_2->addWidget(initButton3);

        initButton4 = new QRadioButton(scrollAreaWidgetContents);
        initiativeButtonGroup->addButton(initButton4);
        initButton4->setObjectName(QStringLiteral("initButton4"));

        verticalLayout_2->addWidget(initButton4);

        reliableLabel = new QLabel(scrollAreaWidgetContents);
        reliableLabel->setObjectName(QStringLiteral("reliableLabel"));

        verticalLayout_2->addWidget(reliableLabel);

        reliableButton1 = new QRadioButton(scrollAreaWidgetContents);
        reliableButtonGroup = new QButtonGroup(preferencePage);
        reliableButtonGroup->setObjectName(QStringLiteral("reliableButtonGroup"));
        reliableButtonGroup->addButton(reliableButton1);
        reliableButton1->setObjectName(QStringLiteral("reliableButton1"));

        verticalLayout_2->addWidget(reliableButton1);

        reliableButton2 = new QRadioButton(scrollAreaWidgetContents);
        reliableButtonGroup->addButton(reliableButton2);
        reliableButton2->setObjectName(QStringLiteral("reliableButton2"));

        verticalLayout_2->addWidget(reliableButton2);

        reliableButton3 = new QRadioButton(scrollAreaWidgetContents);
        reliableButtonGroup->addButton(reliableButton3);
        reliableButton3->setObjectName(QStringLiteral("reliableButton3"));

        verticalLayout_2->addWidget(reliableButton3);

        reliableButton4 = new QRadioButton(scrollAreaWidgetContents);
        reliableButtonGroup->addButton(reliableButton4);
        reliableButton4->setObjectName(QStringLiteral("reliableButton4"));

        verticalLayout_2->addWidget(reliableButton4);

        organizedLabel = new QLabel(scrollAreaWidgetContents);
        organizedLabel->setObjectName(QStringLiteral("organizedLabel"));

        verticalLayout_2->addWidget(organizedLabel);

        organizedButton1 = new QRadioButton(scrollAreaWidgetContents);
        organizedButtonGroup = new QButtonGroup(preferencePage);
        organizedButtonGroup->setObjectName(QStringLiteral("organizedButtonGroup"));
        organizedButtonGroup->addButton(organizedButton1);
        organizedButton1->setObjectName(QStringLiteral("organizedButton1"));

        verticalLayout_2->addWidget(organizedButton1);

        organizedButton2 = new QRadioButton(scrollAreaWidgetContents);
        organizedButtonGroup->addButton(organizedButton2);
        organizedButton2->setObjectName(QStringLiteral("organizedButton2"));

        verticalLayout_2->addWidget(organizedButton2);

        organizedButton3 = new QRadioButton(scrollAreaWidgetContents);
        organizedButtonGroup->addButton(organizedButton3);
        organizedButton3->setObjectName(QStringLiteral("organizedButton3"));

        verticalLayout_2->addWidget(organizedButton3);

        organizedButton4 = new QRadioButton(scrollAreaWidgetContents);
        organizedButtonGroup->addButton(organizedButton4);
        organizedButton4->setObjectName(QStringLiteral("organizedButton4"));

        verticalLayout_2->addWidget(organizedButton4);

        collabLabel = new QLabel(scrollAreaWidgetContents);
        collabLabel->setObjectName(QStringLiteral("collabLabel"));

        verticalLayout_2->addWidget(collabLabel);

        collabButton1 = new QRadioButton(scrollAreaWidgetContents);
        collabButtonGroup = new QButtonGroup(preferencePage);
        collabButtonGroup->setObjectName(QStringLiteral("collabButtonGroup"));
        collabButtonGroup->addButton(collabButton1);
        collabButton1->setObjectName(QStringLiteral("collabButton1"));

        verticalLayout_2->addWidget(collabButton1);

        collabButton2 = new QRadioButton(scrollAreaWidgetContents);
        collabButtonGroup->addButton(collabButton2);
        collabButton2->setObjectName(QStringLiteral("collabButton2"));

        verticalLayout_2->addWidget(collabButton2);

        collabButton3 = new QRadioButton(scrollAreaWidgetContents);
        collabButtonGroup->addButton(collabButton3);
        collabButton3->setObjectName(QStringLiteral("collabButton3"));

        verticalLayout_2->addWidget(collabButton3);

        buttonBox = new QDialogButtonBox(scrollAreaWidgetContents);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        scrollArea->setWidget(scrollAreaWidgetContents);
        textBrowser = new QTextBrowser(preferencePage);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 131, 41));

        retranslateUi(preferencePage);

        QMetaObject::connectSlotsByName(preferencePage);
    } // setupUi

    void retranslateUi(QWidget *preferencePage)
    {
        preferencePage->setWindowTitle(QApplication::translate("preferencePage", "Form", 0));
        gpaLabel->setText(QApplication::translate("preferencePage", "GPA", 0));
        gpaButton1->setText(QApplication::translate("preferencePage", "4-6", 0));
        gpaButton2->setText(QApplication::translate("preferencePage", "10-12", 0));
        gpaButton3->setText(QApplication::translate("preferencePage", "7-9", 0));
        gpaButton4->setText(QApplication::translate("preferencePage", "1-3", 0));
        prereqLabel->setText(QApplication::translate("preferencePage", "Prerequisite Grade", 0));
        prereqButton1->setText(QApplication::translate("preferencePage", "A's", 0));
        prereqButton2->setText(QApplication::translate("preferencePage", "B's", 0));
        prereqButton3->setText(QApplication::translate("preferencePage", "C's", 0));
        prereqButton4->setText(QApplication::translate("preferencePage", "D,s", 0));
        APELabel->setText(QApplication::translate("preferencePage", "APE Standing", 0));
        apeButton1->setText(QApplication::translate("preferencePage", "Good Standing", 0));
        apeButton2->setText(QApplication::translate("preferencePage", "Warning", 0));
        apeButton3->setText(QApplication::translate("preferencePage", "Suspended", 0));
        workloadLabel->setText(QApplication::translate("preferencePage", "Workload", 0));
        workLoadButton1->setText(QApplication::translate("preferencePage", "Part-time", 0));
        workLoadButton2->setText(QApplication::translate("preferencePage", "Full-time", 0));
        workLoadButton3->setText(QApplication::translate("preferencePage", "Overload", 0));
        outcomeLabel->setText(QApplication::translate("preferencePage", "Desired outcome in course", 0));
        outcomeButton1->setText(QApplication::translate("preferencePage", "A's", 0));
        outcomeButton2->setText(QApplication::translate("preferencePage", "B's", 0));
        outcomeButton3->setText(QApplication::translate("preferencePage", "C's", 0));
        outcomeButton4->setText(QApplication::translate("preferencePage", "D,s", 0));
        sleepLabel->setText(QApplication::translate("preferencePage", "Sleeping habits", 0));
        sleepButton1->setText(QApplication::translate("preferencePage", "Early bird", 0));
        sleepButton2->setText(QApplication::translate("preferencePage", "Night owl", 0));
        sleepButton3->setText(QApplication::translate("preferencePage", "Sporadic", 0));
        proximityLabel->setText(QApplication::translate("preferencePage", "Proximity", 0));
        proxiButton1->setText(QApplication::translate("preferencePage", "On-campus", 0));
        proxiButton2->setText(QApplication::translate("preferencePage", "Off-campus", 0));
        proxiButton3->setText(QApplication::translate("preferencePage", "Distant Student", 0));
        commSkillsLabel->setText(QApplication::translate("preferencePage", "Communication skills", 0));
        commButton1->setText(QApplication::translate("preferencePage", "Strong", 0));
        commButton2->setText(QApplication::translate("preferencePage", "Average", 0));
        commButton3->setText(QApplication::translate("preferencePage", "Weak", 0));
        agreeLabel->setText(QApplication::translate("preferencePage", "Agreeability", 0));
        agreeButton1->setText(QApplication::translate("preferencePage", "High", 0));
        agreeButton2->setText(QApplication::translate("preferencePage", "Medium", 0));
        agreeButton3->setText(QApplication::translate("preferencePage", "Low", 0));
        problemLabel->setText(QApplication::translate("preferencePage", "Problem solving skills", 0));
        problemButton1->setText(QApplication::translate("preferencePage", "Strong", 0));
        problemButton2->setText(QApplication::translate("preferencePage", "Average", 0));
        problemButton3->setText(QApplication::translate("preferencePage", "Weak", 0));
        punctualLabel->setText(QApplication::translate("preferencePage", "Punctual", 0));
        punctualButton1->setText(QApplication::translate("preferencePage", "Always", 0));
        punctualButton2->setText(QApplication::translate("preferencePage", "Often", 0));
        punctualButton3->setText(QApplication::translate("preferencePage", "Sometimes", 0));
        punctualButton4->setText(QApplication::translate("preferencePage", "Never", 0));
        initiativeLabel->setText(QApplication::translate("preferencePage", "Takes initiative", 0));
        initButton1->setText(QApplication::translate("preferencePage", "Always", 0));
        initButton2->setText(QApplication::translate("preferencePage", "Often", 0));
        initButton3->setText(QApplication::translate("preferencePage", "Sometimes", 0));
        initButton4->setText(QApplication::translate("preferencePage", "Never", 0));
        reliableLabel->setText(QApplication::translate("preferencePage", "Reliable", 0));
        reliableButton1->setText(QApplication::translate("preferencePage", "Very", 0));
        reliableButton2->setText(QApplication::translate("preferencePage", "Mostly", 0));
        reliableButton3->setText(QApplication::translate("preferencePage", "Somewhat", 0));
        reliableButton4->setText(QApplication::translate("preferencePage", "Not Very", 0));
        organizedLabel->setText(QApplication::translate("preferencePage", "Organized", 0));
        organizedButton1->setText(QApplication::translate("preferencePage", "Very", 0));
        organizedButton2->setText(QApplication::translate("preferencePage", "Mostly", 0));
        organizedButton3->setText(QApplication::translate("preferencePage", "Somewhat", 0));
        organizedButton4->setText(QApplication::translate("preferencePage", "Not Very", 0));
        collabLabel->setText(QApplication::translate("preferencePage", "Previous Collaboration Experience", 0));
        collabButton1->setText(QApplication::translate("preferencePage", "Plenty", 0));
        collabButton2->setText(QApplication::translate("preferencePage", "Little", 0));
        collabButton3->setText(QApplication::translate("preferencePage", "None", 0));
        textBrowser->setHtml(QApplication::translate("preferencePage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Preferences</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class preferencePage: public Ui_preferencePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCEPAGE_H
