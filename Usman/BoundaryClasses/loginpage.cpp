#include "loginpage.h"
#include "ui_loginpage.h"
#include <QtCore>
#include <QtGui>


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
        string s = ui->loginLineEdit->text().toStdString();
        adminUser *admin = new adminUser();

        admin->getadminPage()->setUser(s);
        admin->getadminPage()->show();
        this->close();
    }

    if(ui->studentradioButton->isChecked()){
        string s = ui->loginLineEdit->text().toStdString();

        studentUser *stu = new studentUser();


        stu->getstudentPage()->show();
        this->close();
    }
}
