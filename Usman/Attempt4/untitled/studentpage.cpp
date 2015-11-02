#include "studentpage.h"
#include "ui_studentpage.h"
#include "projectregistration.h"

studentPage::studentPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::studentPage)
{
    ui->setupUi(this);
}

studentPage::~studentPage()
{
    delete ui;
}

void studentPage::on_registerButton_clicked()
{
    this->close();
    projectRegistration *pr = new projectRegistration();
    pr->show();

}
