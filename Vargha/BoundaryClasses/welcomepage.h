#ifndef WELCOMEPAGE_H
#define WELCOMEPAGE_H

#include <QMainWindow>
#include <QDialog>
#include "createprofilepage.h"
#include "loginpage.h"

namespace Ui {
class welcomePage;
}

class welcomePage : public QMainWindow
{
    Q_OBJECT

public:
    explicit welcomePage(QWidget *parent = 0);
    ~welcomePage();

private slots:
    void on_createProfileBtn_clicked();

    void on_loginBtn_clicked();

private:
    Ui::welcomePage *ui;


};

#endif // WELCOMEPAGE_H
