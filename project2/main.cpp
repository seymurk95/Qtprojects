/*#include <QTextStream>

int main(){
    QTextStream out(stdout);
    QString str = "I love MSU";
    out<<str.right(5)<<endl;
    out<<str.left(9)<<endl;
    out<<str.mid(4.5)<<endl;
    QString str2("Baku MSU branch");
    QStringRef sub(&str2,0,7);
    out<<sub.toString()<<endl;
    return 0;
}*/
/*#include <QTextStream>

int main(){
    QTextStream out(stdout);
    QString str = "MSU Baku branch";
    foreach (QChar qc,str) {
        out<<qc<<" ";

    }
    out<<endl;
    for(QChar *it=str.begin();it!=str.end();++it){
        out<<*it<<" ";
    }
    out<<endl;
    for(int i=0;i<str.size();++i){
        out<<str.at(i)<<" ";
    }
    return 0;
}*/

/*#include <QTextStream>
const int STR_EQUAL=0;
int main(){
    QTextStream out(stdout);
    QString a = "MSU";
    QString b = "msu";
    QString c = "msu\n";
    if(QString::compare(a,b)==STR_EQUAL){
        out<<"a,b are equal"<<endl;
    }else{
        out<<"a,b are not equal"<<endl;
    }
    out<<"No case regarded"<<endl;
    if(QString::compare(a,b,Qt::CaseInsensitive)==STR_EQUAL){
        out<<"a,b are equal"<<endl;
    }else{
        out<<"a,b are not equal"<<endl;
    }
    if(QString::compare(b,c)==STR_EQUAL){
        out<<"b,c are equal"<<endl;
    }else{
        out<<"b,c are not equal"<<endl;
    }
    c.chop(1);
    out<<"After last character"<<endl;
    if(QString::compare(b,c)==STR_EQUAL){
        out<<"b,c are equal"<<endl;
    }else{
        out<<"b,c are not equal"<<endl;
    }
    return 0;

}*/

/*#include <QTextStream>

int main(){
    QTextStream out(stdout);
    int digits = 0;
    int letters = 0;
    int spaces = 0;
    int puncts = 0;
    QString str = "16 students in 223 group";
    foreach(QChar s,str){
        if(s.isDigit()){
            digits++;
        }else if(s.isLetter()){
            letters++;
        }else if(s.isSpace()){
            spaces++;
        }else if(s.isPunct()){
            puncts++;
        }
    }
    out<<QString("There are %1 characters").arg(str.count())<<endl;
    out<<QString("There are %1 letters").arg(letters)<<endl;
    out<<QString("There are %1 digits").arg(digits)<<endl;
    out<<QString("There are %1 spaces").arg(spaces)<<endl;
    out<<QString("There are %1 punctuation characters").arg(puncts)<<endl;
    return 0;
}*/
/*#include <QTextStream>

int main(){
    QTextStream out(stdout);
    QString s1 = "12";
    QString s2 = "15";
    QString s3,s4;
    out <<s1.toInt()+s2.toInt()<<endl;
    int n1 = 30;
    int n2 = 40;
    out<<s3.setNum(n1)+s4.setNum(n2)<<endl;
    return 0;
}*/
/*#include <QTextStream>

    int main(){
        QTextStream out(stdout);
        QString name = "Имя : ";
        QString occupation = "Род занятий : ";
        QString addres = "Адрес прописки : ";
        int width = addres.size();
        out<<name.leftJustified(width,' ')<<QString("Махмуд")<<endl;
        out<<occupation.leftJustified(width,' ')<<QString("шахтёр")<<endl;
        out<<addres.leftJustified(width,' ')<<QString("подвальная 13")<<endl;
        return 0;

    }*/
/*#include <QTextStream>
#include <QFile>
int main(){
    QTextStream out(stdout);
    QFile file("example.cpp");
    if(!file.open(QIODevice::ReadOnly)){
        qWarning("Cannot open file\n");
        return -1;
    }
    QTextStream in(&file);
    QString allCode = in.readAll();
    out<<allCode.toHtmlEscaped()<<endl;
    file.close();
    return 0;

}*/












