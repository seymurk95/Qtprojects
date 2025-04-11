/*#include <QTextStream>
#include<QFile>

int main()
{

    QString filename = "/home/stud-05/seymur kazimov/Lessons/LCP/qtProjects/Qtprojects/input.txt";
    QFile file(filename);
    if(file.open(QIODevice::WriteOnly)){
        QTextStream out(&file);
        out<<"Math"<<endl;
        out<<"Physics"<<endl;
        out<<"Chemistry"<<endl;
        out<<"Eco"<<endl;
        out<<"Filology"<<endl;
        out<<"Phsycho"<<endl;

    }else{
        qWarning("Cannot open file");
    }
    file.close();

    return 0;
}*/
/*#include <QTextStream>
#include<QFile>
int main(int argc,char* argv[])
{
    if(argc != 3){
        qWarning("not all arguments provided");
        return -1;
    }
    QString source = argv[1];
    if(!QFile(source).exists()){
        qWarning("File does not exist");
        return -1;
    }
    QString destin(argv[2]);
    QFile::copy(source,destin);

}*/
/*#include <QTextStream>
#include<QFileInfo>
int main(int argc,char* argv[])
{
    QTextStream out(stdout);
    if(argc!=2){
        qWarning("No file provided");
        return -1;
    }
    QString filename = argv[1];
    QFileInfo fileinfo(filename);
    QString group = fileinfo.group();
    QString owner = fileinfo.owner();
    out<<"Group"<<group<<endl;
    out<<"Owner"<<owner<<endl;
}*/
/*#include <QTextStream>
#include<QFileInfo>
#include<QDateTime>
int main(int argc,char* argv[])
{
    QTextStream out(stdout);
    out.setCodec("UTF8");
    if(argc != 2){
        qWarning("No file provided");
        return -1;

    }
    QString filename = argv[1];
    QFileInfo fileinfo(filename);
    QDateTime last_read = fileinfo.lastRead();
    QDateTime last_mod = fileinfo.lastModified();
    out<<"Last time read"<<last_read.toString()<<endl;
    out<<"Last time read"<<last_mod.toString()<<endl;
}*/
/*#include <QTextStream>
#include<QDir>
int main()
{
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QDir dir;
    if(dir.mkdir("msubaku")){
        out<<"msu baku dirrectory created"<<endl;
    }
    dir.mkdir("prikmat");
    if(dir.exists("prikmat")){
        dir.rename("prikmat","prikmat 2 kurs");

    }
    dir.mkpath("msu/baku/prikmat");

}*/
/*#include <QTextStream>
#include<QDir>
int main()
{
    QTextStream out(stdout);
    out.setCodec("UTF8");
    out<<"Current path: "<<QDir::currentPath()<<endl;
    out<<"Home path: "<<QDir::homePath()<<endl;
    out<<"Temporaryt path: "<<QDir::tempPath()<<endl;
    out<<"Root path: "<<QDir::rootPath()<<endl;
}*/
/*#include <QTextStream>
#include<QFileInfo>
int main(int argc,char* argv[])
{
    QTextStream out(stdout);
    out.setCodec("UTF8");
    if(argc != 2){
        qWarning("No file provided");
        return -1;
    }
    QString filename = argv[1];
    QFileInfo fileinfo(filename);
    QString absPath = fileinfo.absoluteFilePath();
    QString basename = fileinfo.baseName();
    QString compBaseName = fileinfo.completeBaseName();
    QString fileName = fileinfo.fileName();
    QString suffix = fileinfo.suffix();
    QString compsuffix = fileinfo.completeSuffix();
    out<<absPath<<endl;
    out<<basename<<endl;
    out<<compBaseName<<endl;
    out<<fileName<<endl;
    out<<suffix<<endl;
    out<<absPath<<endl;
}*/
/*#include <QTextStream>
#include<QFileInfo>
int main(int argc,char* argv[])
{
    QTextStream out(stdout);
    out.setCodec("UTF8");
    if(argc != 2){
        qWarning("No file provided");
        return -1;
    }
    QString filename = argv[1];
    QFile::Permissions ps = QFile::permissions(filename);
    QString fper;
    if(ps & QFile::ReadOwner){
        fper.append('r');
    }else{
        fper.append('-');
    }
    if(ps& QFile::WriteOwner){
        fper.append('w');
    }else{
        fper.append('-');
    }
    if(ps& QFile::WriteOwner){
        fper.append('x');
    }else{
        fper.append('-');
    }
    if(ps& QFile::WriteOwner){
        fper.append('r');
    }else{
        fper.append('-');
    }
    if(ps & QFile::ReadGroup){
        fper.append('r');
    }else{
        fper.append('-');
    }
    if(ps & QFile::ReadGroup){
        fper.append('w');
    }else{
        fper.append('-');
    }
    if(ps & QFile::ExeGroup){
        fper.append('x');
    }else{
        fper.append('-');
    }
    if(ps & QFile::ReadOther){
        fper.append('r');
    }else{
        fper.append('-');
    }
    if(ps & QFile::WriteOther){
        fper.append('w');
    }else{
        fper.append('-');
    }
    if(ps & QFile::ExeOther){
        fper.append('x');
    }else{
        fper.append('-');
    }
    out<<fper<<endl;
}*/
/*#include <QTextStream>
#include<QFileInfo>
#include<QDir>
int main(int argc,char* argv[])
{
    QTextStream out(stdout);
    out.setCodec("UTF8");
    if(argc != 2){
        qWarning("No file provided");
        return -1;
    }
    QString directory  = argv[1];
    QDir dir(directory);
    if(!dir.exists()){
        qWarning("Dir does not exist");
        return -1;
    }
    dir.setFilter(QDir::Files | QDir::AllDirs);
    dir.setSorting(QDir::Size | QDir::Reversed);
    QFileInfoList list = dir.entryInfoList();
    int max_size = 0;
    foreach (QFileInfo finfo,list) {
        QString name  = finfo.fileName();
        int size = name.size();
        if(size>max_size){
            max_size = size;
        }

    }
    int len = max_size+2;
    out<<QString("filename").leftJustified(len).append("bytes")<<endl;
    for(int i= 0;i<list.size();++i){
        QFileInfo fileInfo = list.at(i);
        QString str= fileInfo.fileName().leftJustified(len);
        str.append(QString("%1").arg(fileInfo.size()));
        out<<str<<endl;
    }
}*/


