#ifndef USERLOGIN_H
#define USERLOGIN_H

#include <QMainWindow>

namespace Ui {
class userLogin;
}

class userLogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit userLogin(QWidget *parent = 0);
    ~userLogin();

private slots:
    void on_loginButton_clicked();

    void on_createProfileButton_clicked();

private:
    Ui::userLogin *ui;
};

#endif // USERLOGIN_H
