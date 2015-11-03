#include "projectregistration.h"
#include "ui_projectregistration.h"

#include "studentpage.h"
projectRegistration::projectRegistration(QWidget *parent, QWidget *source) :
    QWidget(parent),
    ui(new Ui::projectRegistration)
{
    window = source;
    ui->setupUi(this);
}

projectRegistration::~projectRegistration()
{
    delete ui;
}

// return to student page when cancel button is clicked
void projectRegistration::on_cancelButton_clicked()
{
    window->show();
    this->close();

}
