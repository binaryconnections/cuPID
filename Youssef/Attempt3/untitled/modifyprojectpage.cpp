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

}

// modify project attributes
void modifyProjectPage::on_updateButton_clicked()
{
    window->show();
    /* when modify is clicked
     * update the project description
     * and/or max capacity
     */
    this->close();

}
