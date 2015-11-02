#include "loginpage.h"
#include "ui_loginpage.h"


loginPage::loginPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginPage)
{
    ui->setupUi(this);
}

loginPage::~loginPage()
{
    delete ui;
}

void loginPage::on_pushButton_clicked()
{
    this->close();
    // create a welcome page to return to
    welcomePage *wp = new welcomePage();
    wp->show();

}
