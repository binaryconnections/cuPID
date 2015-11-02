#include "welcomepage.h"
#include "ui_welcomepage.h"
#include "uicontrol.h"


welcomePage::welcomePage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::welcomePage)
{
    ui->setupUi(this);
}

welcomePage::~welcomePage()
{
    delete ui;
}



void welcomePage::on_createProfileBtn_clicked()
{
    this->close();
    // this creates the createProfile page
    createProfilePage *cpp = new createProfilePage();
    cpp->setWindowModality(Qt::WindowModal);
    cpp->show();

}

void welcomePage::on_loginBtn_clicked()
{
    this->close();
    uiControl *ui = new uiControl();
    ui->lp->show();
    ui->lp->setWindowModality(Qt::WindowModal);

}
