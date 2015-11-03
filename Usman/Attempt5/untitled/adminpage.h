#ifndef ADMINPAGE_H
#define ADMINPAGE_H

#include <QWidget>
#include "createprojectpage.h"
#include "modifyprojectpage.h"

namespace Ui {
class adminPage;
}

class adminPage : public QWidget
{
    Q_OBJECT

public:
    explicit adminPage(QWidget *parent = 0);
    ~adminPage();

private slots:
    void on_createProjectButton_clicked();

    void on_modifyProjectButton_clicked();

    void on_editPrefButton_clicked();

private:
    Ui::adminPage *ui;
};

#endif // ADMINPAGE_H
