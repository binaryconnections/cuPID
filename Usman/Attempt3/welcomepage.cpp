#include "welcomepage.h"
#include "ui_welcomepage.h"


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
    createProfilePage *cpp = new createProfilePage();
    cpp->setWindowModality(Qt::WindowModal);
    cpp->show();

}

void welcomePage::on_loginBtn_clicked()
{
    this->close();
    loginPage *lp = new loginPage();
    lp->setWindowModality(Qt::WindowModal);
    lp->showNormal();

}
