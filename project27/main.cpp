#include "keypress.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KeyPress w;
    w.resize(300,250);
    w.setWindowTitle("w");
    w.show();
    return a.exec();
}
