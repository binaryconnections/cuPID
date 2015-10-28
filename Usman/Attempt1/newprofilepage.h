#ifndef NEWPROFILEPAGE_H
#define NEWPROFILEPAGE_H

#include <QDialog>

namespace Ui {
class newProfilePage;
}

class newProfilePage : public QDialog
{
    Q_OBJECT

public:
    explicit newProfilePage(QWidget *parent = 0);
    ~newProfilePage();

private:
    Ui::newProfilePage *ui;
};

#endif // NEWPROFILEPAGE_H
