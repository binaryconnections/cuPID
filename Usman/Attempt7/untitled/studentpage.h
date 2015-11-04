#ifndef STUDENTPAGE_H
#define STUDENTPAGE_H

#include <QWidget>

#include "welcomepage.h"

namespace Ui {
class studentPage;
}

class studentPage : public QWidget
{
    Q_OBJECT

public:
    explicit studentPage(QWidget *parent = 0);
    ~studentPage();

private slots:
    void on_registerButton_clicked();

    void on_editPrefButton_clicked();

    void on_editProfileButton_clicked();

    void on_logoutButton_clicked();

private:
    Ui::studentPage *ui;
};

#endif // STUDENTPAGE_H
