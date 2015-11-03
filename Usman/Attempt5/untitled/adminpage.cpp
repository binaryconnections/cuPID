#include "adminpage.h"
#include "ui_adminpage.h"
#include "preferencepage.h"

adminPage::adminPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminPage)
{
    ui->setupUi(this);
}

adminPage::~adminPage()
{
    delete ui;
}

// open create project page
void adminPage::on_createProjectButton_clicked()
{
    this->close();
    createProjectPage *createProj = new createProjectPage();
    createProj->show();
}

// create modify project page
void adminPage::on_modifyProjectButton_clicked()
{
    this->close();
    modifyProjectPage *modifProj = new modifyProjectPage();
    modifProj->show();
}



void adminPage::on_editPrefButton_clicked()
{
    this->setWindowModality(Qt::WindowModal);   // disable admin page
    preferencePage *pp = new preferencePage();
    pp->show();
}
