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

void createProfilePage::on_dialogButtonBox_accepted()
{
    //action for OK
}


void createProfilePage::on_dialogButtonBox_rejected()
{
    this->close();
    // create a welcome page to return to
    welcomePage *wp = new welcomePage();
    wp->show();

}
