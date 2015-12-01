#ifndef STUDENTPAGE_H
#define STUDENTPAGE_H

#include <QWidget>

#include "welcomepage.h"
#include "studentuser.h"

class studentUser;

namespace Ui {
class studentPage;
}

class studentPage : public QWidget
{
    Q_OBJECT

public:
    explicit studentPage(QWidget *parent = 0, studentUser *stu = 0);
    ~studentPage();

private slots:
    void on_registerButton_clicked();

    void on_editPrefButton_clicked();

    void on_editProfileButton_clicked();

    void on_logoutButton_clicked();

private:
    studentUser     *user;
    Ui::studentPage *ui;
};

#endif // STUDENTPAGE_H
