
/*#include <QApplication>
#include <QWidget>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.resize(250,150);
    window.move(300,300);
    window.setWindowTitle("MSU Baku");
    window.setToolTip("How yo go to academ");
    window.show();

    return app.exec();
}*/
/*#include <QApplication>
#include <QWidget>
#include<QIcon>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    window.resize(250,150);
    window.setWindowTitle("MSU Prikmat");
    window.setWindowIcon(QIcon("/home/stud-05/Downloads/blueberries.png"));
    window.show();
    return app.exec();

}*/
/*#include <QApplication>
#include <QWidget>
#include <QFrame>
#include<QGridLayout>
class Cursors : public QWidget{
public:
    Cursors(QWidget *parent = 0);
};
Cursors::Cursors(QWidget* parent): QWidget(parent){
    QFrame* frame1 = new QFrame(this);
    frame1 -> setFrameStyle(QFrame::Box);
    frame1 -> setCursor(Qt::SizeAllCursor);
    QFrame* frame2 = new QFrame(this);
    frame2 -> setFrameStyle(QFrame::Box);
    frame2 -> setCursor(Qt::WaitCursor);
    QFrame* frame3 = new QFrame(this);
    frame3 -> setFrameStyle(QFrame::Box);
    frame3 -> setCursor(Qt::PointingHandCursor);
    QGridLayout* grid = new QGridLayout(this);
    grid -> addWidget(frame1,0,0);
    grid -> addWidget(frame2,0,1);
    grid -> addWidget(frame3,0,2);
    setLayout(grid);
}
int main(int argc,char* argv[]){
    QApplication app(argc, argv);
    Cursors window;
    window.resize(350,150);
    window.setWindowTitle("Cursors");
    window.show();
    return app.exec();
}*/
/*#include <QApplication>
#include <QWidget>
#include <QPushButton>
class MyButton: public QWidget{
public:
    MyButton(QWidget* parent=0);
};
MyButton::MyButton(QWidget* parent):
    QWidget(parent){
    QPushButton* quitBtn = new QPushButton(QString("Сделай мне хорошо"),this);
    quitBtn ->setGeometry(50,40,150,30);
    connect(quitBtn,&QPushButton::clicked,qApp,&QApplication::quit);
}
int main(int argc,char* argv[]){
    QApplication app(argc, argv);
    MyButton window;
    window.resize(350,150);
    window.setWindowTitle("dream");
    window.show();
    return app.exec();

}*/


