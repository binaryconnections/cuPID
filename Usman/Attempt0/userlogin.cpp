#include "userlogin.h"
#include "ui_userlogin.h"

userLogin::userLogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::userLogin)
{
    ui->setupUi(this);
}

userLogin::~userLogin()
{
    delete ui;
}

void userLogin::on_loginButton_clicked()
{
    //TODO login to the selected profile
}


void userLogin::on_createProfileButton_clicked()
{
    //TODO send user to create profile page
}
