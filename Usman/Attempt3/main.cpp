#include "adminpage.h"
#include "createprofilepage.h"
#include "loginpage.h"
#include "studentpage.h"
#include "welcomepage.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    welcomePage w;
    w.show();

    adminPage ap;
    ap.show();

    return a.exec();
}
