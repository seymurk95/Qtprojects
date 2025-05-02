#include "toolbar.h""

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     Toolbar w;
    w.resize(350,150);
     w.setWindowTitle("w");
    w.show();
    return a.exec();
}
