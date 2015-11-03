#ifndef USERPROFILEPAGE_H
#define USERPROFILEPAGE_H

#include <QWidget>

namespace Ui {
class userProfilePage;
}

class userProfilePage : public QWidget
{
    Q_OBJECT

public:
    explicit userProfilePage(QWidget *parent = 0, QWidget *source = 0);
    ~userProfilePage();

private slots:
    void on_selfPrefButton_clicked();

    void on_buttonBox_rejected();

private:
    Ui::userProfilePage *ui;
    QWidget             *window;
};

#endif // USERPROFILEPAGE_H
