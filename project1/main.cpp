/*#include <QTextStream>

int main()
{
    QTextStream out(stdout);
    QString a = "love";
    a.append("MSU");
    a.prepend("| ");
    out<<a<<endl;
    out<<"The string has "<<a.count()<<"symbols"<<endl;
    out<<a.toUpper()<<endl;
    out<<a.toLower()<<endl;

    return 0;
}*/
/*#include <QTextStream>
int main(){
    QTextStream out(stdout);
    QString str1 = "| love MSU";
    out<<str1<<endl;
    QString str2("MSU loves me");
    out<<str2<<endl;
    std::string s1 = "MSU loves everybody";
    QString str3= s1.c_str();
    out<<str3<<endl;
    std::string s2 = "Academ love";
    QString str4 = QString::fromLatin1(s2.data(),s2.size());
    out<<str4<<endl;
    char s3[]="Academ for everyone";
    QString str5(s3);
    out<<str5<<endl;
    return 0;
}
*/
/*#include <QTextStream>
int main(){
    QTextStream out(stdout);
    QString s1 = "MSU Baku";
    QString s2 = "MSU Baku\n";
    QString s3 = "MSU Baku ";
    QString s4 = "МГУ Баку";
    out<<s1.length()<<" "<<s1.count()<< " "<<s1.size()<<endl;
    out<<s2.length()<<" "<<s2.count()<< " "<<s2.size()<<endl;
    out<<s3.length()<<" "<<s3.count()<< " "<<s3.size()<<endl;
    out<<s4.length()<<" "<<s4.count()<< " "<<s4.size()<<endl;
}*/

/*#include <QTextStream>
int main(){
    QTextStream out(stdout);
    QString s1 = "there are %1 white roses";
    int n = 12;
    out<<s1.arg(n)<<endl;
    QString s2 = "There will be %1 academs";
    double a = 999.0;
    out<<s2.arg(a)<<endl;
    QString s3 = "We will send %1 and %2 to academ";
    QString name1="Seymur";
    QString name2="Bogdan";
    out<<s3.arg(name1).arg(name2)<<endl;
    return 0;

}*/










