#include "studentpage.h"
#include "ui_studentpage.h"
#include "projectregistration.h"
#include "preferencepage.h"

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

// opens registration page when register button is clicked
void studentPage::on_registerButton_clicked()
{
    this->close();
    projectRegistration *pr = new projectRegistration();
    pr->show();

}

void studentPage::on_editPrefButton_clicked()
{
    this->setWindowModality(Qt::WindowModal);   // disable student page
    preferencePage *pp = new preferencePage();
    pp->show();
}
