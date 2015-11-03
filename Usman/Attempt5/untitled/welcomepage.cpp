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


// opens create profile page when create button is clicked
void welcomePage::on_createProfileBtn_clicked()
{
    this->close();
    // this creates the createProfile page
    createProfilePage *cpp = new createProfilePage();
    cpp->setWindowModality(Qt::WindowModal);
    cpp->show();

}

// opens login page when login button is clicked
void welcomePage::on_loginBtn_clicked()
{
    this->close();
    uiControl *ui = new uiControl();
    ui->lp->show();
    ui->lp->setWindowModality(Qt::WindowModal);

}
