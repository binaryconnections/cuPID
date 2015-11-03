#ifndef PREFERENCEPAGE_H
#define PREFERENCEPAGE_H

#include <QWidget>

using namespace std;

namespace Ui {
class preferencePage;
}

class preferencePage : public QWidget
{
    Q_OBJECT

public:
    explicit preferencePage(QWidget *parent = 0, QWidget *source = 0);
    ~preferencePage();

private slots:
    void on_buttonBox_rejected();

private:
    Ui::preferencePage *ui;
    QWidget            *window;
};

#endif // PREFERENCEPAGE_H
