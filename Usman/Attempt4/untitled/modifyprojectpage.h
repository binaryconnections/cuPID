#ifndef MODIFYPROJECTPAGE_H
#define MODIFYPROJECTPAGE_H

#include <QWidget>

namespace Ui {
class modifyProjectPage;
}

class modifyProjectPage : public QWidget
{
    Q_OBJECT

public:
    explicit modifyProjectPage(QWidget *parent = 0);
    ~modifyProjectPage();

private slots:
    void on_cancelButton_clicked();

private:
    Ui::modifyProjectPage *ui;
};

#endif // MODIFYPROJECTPAGE_H
