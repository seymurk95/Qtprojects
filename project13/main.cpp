#include <QApplication>
#include "plusminus.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PlusMinus window;
    window.resize(350,150);
    window.setWindowTitle("window");
    window.show();

    return a.exec();
}
