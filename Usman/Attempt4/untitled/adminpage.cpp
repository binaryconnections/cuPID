#include "adminpage.h"
#include "ui_adminpage.h"

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

void adminPage::on_createProjectButton_clicked()
{
    this->close();
    createProjectPage *createProj = new createProjectPage();
    createProj->show();
}

void adminPage::on_modifyProjectButton_clicked()
{
    this->close();
    modifyProjectPage *modifProj = new modifyProjectPage();
    modifProj->show();
}
