#include "Simplemenu.h""

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimpleMenu w;
    w.resize(250,150);
    w.setWindowTitle("Simple menu");

    w.show();
    return a.exec();
}
