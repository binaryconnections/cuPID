#include "adminpage.h"
#include "ui_adminpage.h"
#include "preferencepage.h"

adminPage::adminPage(QWidget *parent, QWidget *source) :
    QWidget(parent),
    ui(new Ui::adminPage)
{
    window = source;
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
