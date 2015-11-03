#include "preferencepage.h"
#include "ui_preferencepage.h"
#include <iostream>

using namespace std;

preferencePage::preferencePage(QWidget *parent, QWidget *source) :
    QWidget(parent),
    ui(new Ui::preferencePage)
{
    window = source;
    ui->setupUi(this);
}

preferencePage::~preferencePage()
{
    delete ui;
}

void preferencePage::on_buttonBox_rejected()
{
    window->show();
    this->close();

}
