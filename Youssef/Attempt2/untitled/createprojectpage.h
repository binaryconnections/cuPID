#ifndef CREATEPROJECTPAGE_H
#define CREATEPROJECTPAGE_H

#include <QWidget>

namespace Ui {
class createProjectPage;
}

class createProjectPage : public QWidget
{
    Q_OBJECT

public:
    explicit createProjectPage(QWidget *parent = 0, QWidget *source = 0);
    ~createProjectPage();

private slots:
    void on_cancelButton_clicked();

private:
    Ui::createProjectPage *ui;
    QWidget               *window;
};

#endif // CREATEPROJECTPAGE_H
