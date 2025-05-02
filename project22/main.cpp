#include "nesting.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Layouts w;
    w.resize(290,300);
    w.setWindowTitle("w");
    w.show();
    return a.exec();
}
