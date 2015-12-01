#include "createprojectpage.h"
#include "ui_createprojectpage.h"
#include "adminpage.h"
#include "projects.h"

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

}

// create a new project
void createProjectPage::on_createButton_clicked()
{
    window->show();

    string name = ui->nameText->toPlainText().toStdString();

    projects *proj = new projects();
    proj->stCtrl->data->createProject(name);

    /* when create is clicked
     * take string from description set to project name
     * and set max capacity
     */
    this->close();

}
