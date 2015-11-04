#include "studentpage.h"
#include "ui_studentpage.h"
#include "projectregistration.h"
#include "preferencepage.h"
#include "userprofilepage.h"
#include "studentuser.h"

studentPage::studentPage(QWidget *parent, studentUser *stu) :
    QWidget(parent),
    ui(new Ui::studentPage)
{
    user = stu;
    ui->setupUi(this);


}

studentPage::~studentPage()
{
    delete ui;
}



// opens registration page when register button is clicked
void studentPage::on_registerButton_clicked()
{
    this->hide();
    projectRegistration *pr = new projectRegistration(0, this);
    pr->show();

}

// edit preferences
void studentPage::on_editPrefButton_clicked()
{
    this->hide();
    preferencePage *pp = new preferencePage(0, this);
    pp->show();
}

// edit profile
void studentPage::on_editProfileButton_clicked()
{
    this->hide();
    userProfilePage *upp = new userProfilePage(0, this);
    upp->show();
}

void studentPage::on_logoutButton_clicked()
{
    this->destroy();
    welcomePage *wp = new welcomePage();
    wp->show();
}
