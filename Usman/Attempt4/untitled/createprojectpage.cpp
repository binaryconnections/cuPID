#include "createprojectpage.h"
#include "ui_createprojectpage.h"
#include "adminpage.h"

createProjectPage::createProjectPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::createProjectPage)
{
    ui->setupUi(this);
}

createProjectPage::~createProjectPage()
{
    delete ui;
}

void createProjectPage::on_cancelButton_clicked()
{
    this->close();
    /* should show the page of admin creating
     * the project
     */


    adminPage *ap = new adminPage();
    ap->show();

}
