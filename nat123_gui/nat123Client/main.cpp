#include "nat123client.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    nat123client w;
    w.show();

    return a.exec();
}
