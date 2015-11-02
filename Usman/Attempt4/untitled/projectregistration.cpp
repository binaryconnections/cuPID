#include "projectregistration.h"
#include "ui_projectregistration.h"

projectRegistration::projectRegistration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::projectRegistration)
{
    ui->setupUi(this);
}

projectRegistration::~projectRegistration()
{
    delete ui;
}

void projectRegistration::on_cancelButton_clicked()
{
    this->close();
    /*
     * this might not work. upon exit the studentpage of
     * the student already logged in should
     * be shown
     */
    studentPage *sp = new studentPage();
    sp->show();
}
