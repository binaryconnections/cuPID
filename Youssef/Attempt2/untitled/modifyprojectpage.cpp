#include "modifyprojectpage.h"
#include "ui_modifyprojectpage.h"
#include "uicontrol.h"

modifyProjectPage::modifyProjectPage(QWidget *parent, QWidget *source) :
    QWidget(parent),
    ui(new Ui::modifyProjectPage)
{
    window = source;
    ui->setupUi(this);
}

modifyProjectPage::~modifyProjectPage()
{
    delete ui;
}

// return to admin page when cancel button is clicked
void modifyProjectPage::on_cancelButton_clicked()
{
    window->show();
    this->close();
    //adminPage *ap = new adminPage(0, this);
    //ap->show();
}
