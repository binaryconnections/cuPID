#include "createprofilepage.h"
#include "ui_createprofilepage.h"
#include "uicontrol.h"

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

void createProfilePage::on_adminToggle_toggled(bool checked)
{

}
