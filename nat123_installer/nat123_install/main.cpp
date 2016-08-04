#include "nat123install.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    using namespace std;
    QApplication a(argc, argv);
    Nat123Install w;
    w.show();

    return a.exec();
}
