#ifndef STUDENTPAGE_H
#define STUDENTPAGE_H

#include <QWidget>

namespace Ui {
class studentPage;
}

class studentPage : public QWidget
{
    Q_OBJECT

public:
    explicit studentPage(QWidget *parent = 0);
    ~studentPage();

private:
    Ui::studentPage *ui;
};

#endif // STUDENTPAGE_H
