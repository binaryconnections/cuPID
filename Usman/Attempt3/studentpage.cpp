#include "studentpage.h"
#include "ui_studentpage.h"

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
