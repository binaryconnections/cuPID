#ifndef CREATEPROFILEPAGE_H
#define CREATEPROFILEPAGE_H

#include <QWidget>

#include "welcomepage.h"

namespace Ui {
class createProfilePage;
}

class createProfilePage : public QWidget
{
    Q_OBJECT

public:
    explicit createProfilePage(QWidget *parent = 0);
    ~createProfilePage();

private slots:
    void on_dialogButtonBox_accepted();

    void on_dialogButtonBox_rejected();

private:
    Ui::createProfilePage *ui;

};

#endif // CREATEPROFILEPAGE_H
