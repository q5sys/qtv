#include "qtv.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qtv w;

    w.show();

    return a.exec();
}
