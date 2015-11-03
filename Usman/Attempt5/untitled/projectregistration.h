#ifndef PROJECTREGISTRATION_H
#define PROJECTREGISTRATION_H

#include <QWidget>
#include "uicontrol.h"
#include "studentpage.h"

namespace Ui {
class projectRegistration;
}

class projectRegistration : public QWidget
{
    Q_OBJECT

public:
    explicit projectRegistration(QWidget *parent = 0);
    ~projectRegistration();

private slots:
    void on_cancelButton_clicked();

private:
    Ui::projectRegistration *ui;
};

#endif // PROJECTREGISTRATION_H
