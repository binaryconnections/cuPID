#include "userprofilepage.h"
#include "ui_userprofilepage.h"
#include "preferencepage.h"
#include "studentpage.h"

userProfilePage::userProfilePage(QWidget *parent, QWidget *source) :
    QWidget(parent),
    ui(new Ui::userProfilePage)
{
    window = source;
    ui->setupUi(this);
}

userProfilePage::~userProfilePage()
{
    delete ui;
}

void userProfilePage::on_selfPrefButton_clicked()
{
    this->hide();
    preferencePage *epp = new preferencePage(0,this);
    epp->setWindowModality(Qt::WindowModal);
    epp->show();
}

// edit profile page cancel button pressed
void userProfilePage::on_buttonBox_rejected()
{
    window->show();
    this->close();


}
