#include "TestAplicationMotBus.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestAplicationMotBus w;
    w.show();
    return a.exec();
}
