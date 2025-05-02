#include "vertical.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VerticalBox w;
    w.resize(240,300);
    w.setWindowTitle("w");
    w.show();
    return a.exec();
}
