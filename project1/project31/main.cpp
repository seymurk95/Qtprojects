#include "label.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Label w;
    w.resize(250,300);
    w.setWindowTitle("w");
    w.show();
    return a.exec();
}
