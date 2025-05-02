#include "form.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FormEx w;
    w.resize(300,300);
    w.setWindowTitle("w");
    w.show();
    return a.exec();
}
