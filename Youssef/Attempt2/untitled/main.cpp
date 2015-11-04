#include "control.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    control *mainControl = new control();

    return a.exec();
}
