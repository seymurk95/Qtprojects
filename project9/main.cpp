#include <QTextStream>>
#include <QFile>
int main()
{
    QTextStream out(stdout);
    QFile file ("/home/stud-05/seymur kazimov/Lessons/LCP/Sapkovskiy_Andjey_[Vedmak_Geralt]_Vedmak.txt");
    if(!file.open(QIODevice::ReadOnly)){
        qWarning("Can not open file for reading");
        return -1;
    }
    QTextStream in(&file);
    while(!in.atEnd()){
        QString line = in.readLine();
        out<<line<<endl;
    }
    file.close();

}
