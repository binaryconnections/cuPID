#include "createprofilepage.h"
#include "ui_createprofilepage.h"
#include "studentuser.h"



createProfilePage::createProfilePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::createProfilePage)
{
    ui->setupUi(this);
}

createProfilePage::~createProfilePage()
{
    delete ui;
}

// register the user profile and open user specific page
// if student then open student page
// if admin then open admin page
void createProfilePage::on_dialogButtonBox_accepted()
{
    string s = ui->userText->text().toStdString();   // get input from textfield

    if (ui->adminToggle->isChecked()){
        //string s = ui->userText->text().toStdString();

        /* new admin user if admin radio button
         * is toggled and set its username
         * to what is entered in text field
         */
        adminUser *admin = new adminUser();
        admin->setUsername(s);
        admin->stCtrl->data->createAdmin(s);
        admin->getadminPage()->show();

        this->close();

    }
    if (ui->studentToggle->isChecked()){
        //string s = ui->userText->text().toStdString();

        /* new student user if student radio button
         * is toggled and set its username
         * to what is entered in text field
         */
        studentUser *stu = new studentUser();
        stu->setUsername(s);
        stu->stCtrl->data->createStudent(s);
        stu->getstudentPage()->show();

        this->close();
    }
}

// return to welcome page if profile creation is cancelled
void createProfilePage::on_dialogButtonBox_rejected()
{
    this->close();
    // create a welcome page to return to
    welcomePage *wp = new welcomePage();
    wp->show();

}
