#include "adminpage.h"
#include "ui_adminpage.h"
#include "adminuser.h"
#include <string>
using namespace std;


adminPage::adminPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminPage)
{
    ui->setupUi(this);
    //string s = getUser();
    //QString qstr = QString::fromStdString(s);


}

adminPage::~adminPage()
{
    delete ui;
}

void adminPage::setUser(string s)
{
    user = s;
}

string adminPage::getUser()
{
    return user;
}

// open create project page
void adminPage::on_createProjectButton_clicked()
{
    this->close();
    createProjectPage *createProj = new createProjectPage(0, this);
    createProj->show();
}

// create modify project page
void adminPage::on_modifyProjectButton_clicked()
{
    this->close();
    modifyProjectPage *modifProj = new modifyProjectPage(0, this);
    modifProj->show();
}


// edit preferences button clicked
void adminPage::on_editPrefButton_clicked()
{
    this->hide();
    preferencePage *pp = new preferencePage(0, this);
    pp->show();
}

void adminPage::on_logoutButton_clicked()
{
    this->destroy();
    welcomePage *wp = new welcomePage();
    wp->show();
}
