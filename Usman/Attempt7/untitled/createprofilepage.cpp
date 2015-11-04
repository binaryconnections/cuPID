#include "createprofilepage.h"
#include "ui_createprofilepage.h"



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
        studentPage *sp = new studentPage();
        this->close();  // close the createprofile page
        sp->show();


    }
    //action for OK
}

// return to welcome page if profile creation is cancelled
void createProfilePage::on_dialogButtonBox_rejected()
{
    this->close();
    // create a welcome page to return to
    welcomePage *wp = new welcomePage();
    wp->show();

}
