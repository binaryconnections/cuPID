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

// return to welcome page if cancel button is clicked
void loginPage::on_pushButton_clicked()
{
    this->close();
    // create a welcome page to return to
    welcomePage *wp = new welcomePage();
    wp->show();

}

void loginPage::on_loginButton_clicked()
{
    if(ui->adminradioButton->isChecked()){
        adminPage *ap = new adminPage();
        ap->show();
        this->close();
    }

    if(ui->studentradioButton->isChecked()){
        studentPage *sp = new studentPage();
        sp->show();
        this->close();
    }
}
