#ifndef ADMINPAGE_H
#define ADMINPAGE_H

#include <QWidget>
#include "createprojectpage.h"
#include "modifyprojectpage.h"
#include "welcomepage.h"
#include "preferencepage.h"
#include "adminuser.h"
#include <string>

using namespace std;

namespace Ui {
class adminPage;
}

class adminPage : public QWidget
{
    Q_OBJECT

public:
    explicit adminPage(QWidget *parent = 0);
    ~adminPage();

    void setUser(string s);
    string getUser();

private slots:
    void on_createProjectButton_clicked();

    void on_modifyProjectButton_clicked();

    void on_editPrefButton_clicked();

    void on_logoutButton_clicked();



private:
    Ui::adminPage *ui;
    QWidget       *window;
    string user;
};

#endif // ADMINPAGE_H
