#include "createprojectpage.h"
#include "ui_createprojectpage.h"
#include "adminpage.h"

createProjectPage::createProjectPage(QWidget *parent, QWidget *source) :
    QWidget(parent),
    ui(new Ui::createProjectPage)
{
    window = source;
    ui->setupUi(this);
}

createProjectPage::~createProjectPage()
{
    delete ui;
}

// return to admin page if cancel button is clicked
void createProjectPage::on_cancelButton_clicked()
{
    window->show();
    this->close();
    //adminPage *ap = new adminPage(0, this);
    //ap->show();

}
