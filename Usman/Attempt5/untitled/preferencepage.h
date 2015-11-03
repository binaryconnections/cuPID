#ifndef PREFERENCEPAGE_H
#define PREFERENCEPAGE_H

#include <QWidget>

namespace Ui {
class preferencePage;
}

class preferencePage : public QWidget
{
    Q_OBJECT

public:
    explicit preferencePage(QWidget *parent = 0);
    ~preferencePage();

private:
    Ui::preferencePage *ui;
};

#endif // PREFERENCEPAGE_H
