#include "modifyprojectpage.h"
#include "ui_modifyprojectpage.h"
#include "uicontrol.h"

modifyProjectPage::modifyProjectPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modifyProjectPage)
{
    ui->setupUi(this);
}

modifyProjectPage::~modifyProjectPage()
{
    delete ui;
}

// return to admin page when cancel button is clicked
void modifyProjectPage::on_cancelButton_clicked()
{
    this->close();
    /*
     * when cancelled, it should direct to
     * the main page of admin already
     * logged in
     */

    uiControl *ui = new uiControl();
    ui->ap->show();
}
