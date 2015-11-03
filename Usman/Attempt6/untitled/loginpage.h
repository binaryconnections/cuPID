#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include "welcomepage.h"

namespace Ui {
class loginPage;
}

class loginPage : public QWidget
{
    Q_OBJECT

public:
    explicit loginPage(QWidget *parent = 0);
    ~loginPage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::loginPage *ui;

};

#endif // LOGINPAGE_H
