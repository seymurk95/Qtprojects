#include "timer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Timer w;
    w.resize(250,300);
    w.setWindowTitle("w");
    w.show();
    return a.exec();
}
