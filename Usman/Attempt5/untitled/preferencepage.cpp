#include "preferencepage.h"
#include "ui_preferencepage.h"

preferencePage::preferencePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::preferencePage)
{
    ui->setupUi(this);
}

preferencePage::~preferencePage()
{
    delete ui;
}
