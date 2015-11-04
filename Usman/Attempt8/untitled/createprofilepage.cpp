#include "createprofilepage.h"
#include "ui_createprofilepage.h"
#include "studentuser.h"



createProfilePage::createProfilePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::createProfilePage)
{
    ui->setupUi(this);
}

createProfilePage::~createProfilePage()
{
    delete ui;
}

// register the user profile and open user specific page
// if student then open student page
// if admin then open admin page
void createProfilePage::on_dialogButtonBox_accepted()
{
    if (ui->adminToggle->isChecked()){

        adminPage *ap = new adminPage();
        this->close();  // close the createprofile page
        ap->show();
    }
    if (ui->studentToggle->isChecked()){
        studentUser *stu = new studentUser(ui->userText->text().toStdString());
        studentPage *sp = new studentPage(0, stu);
        this->close();  // close the createprofile page
        sp->show();


    }

}

// return to welcome page if profile creation is cancelled
void createProfilePage::on_dialogButtonBox_rejected()
{
    this->close();
    // create a welcome page to return to
    welcomePage *wp = new welcomePage();
    wp->show();

}
