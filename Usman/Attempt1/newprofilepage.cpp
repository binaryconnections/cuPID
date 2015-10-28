#include "newprofilepage.h"
#include "ui_newprofilepage.h"

newProfilePage::newProfilePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newProfilePage)
{
    ui->setupUi(this);
}

newProfilePage::~newProfilePage()
{
    delete ui;
}
