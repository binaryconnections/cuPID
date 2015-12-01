#ifndef CREATEPROJECTPAGE_H
#define CREATEPROJECTPAGE_H

#include <QWidget>
#include "storagecontrol.h"

namespace Ui {
class createProjectPage;
}

class createProjectPage : public QWidget
{
    Q_OBJECT

public:
    explicit createProjectPage(QWidget *parent = 0, QWidget *source = 0);
    ~createProjectPage();
    storageControl  *stCtrl;


private slots:
    void on_cancelButton_clicked();

    void on_createButton_clicked();

private:
    Ui::createProjectPage *ui;
    QWidget               *window;
};

#endif // CREATEPROJECTPAGE_H
