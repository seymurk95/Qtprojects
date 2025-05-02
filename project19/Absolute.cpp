#include<QApplication>
#include<QDesktopWidget>
#include<QTextEdit>
class Absolute: public QWidget{
public:
    Absolute(QWidget *parent=nullptr);
};
Absolute::Absolute(QWidget *parent):
    QWidget(parent){
    auto *ledit = new QTextEdit(this);
    ledit -> setGeometry(5,5,200,150);

}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Absolute w;
    w.setWindowTitle("w");
    w.show();
    return a.exec();
}
