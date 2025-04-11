#include <QTextStream>>
#include <QFileInfo>
int main(int argc,char* argv[])
{
    QTextStream out(stdout);
    if(argc != 2){
        qWarning("No file provided");
        return -1;
    }
    QString filename = argv[1];
    if(!QFile(filename).exists()){
        qWarning("file does not exist");
        return -1;
    }
    QFileInfo fileinfo(filename);
    qint64 size = fileinfo.size();
    QString str = "The file is %1 bytes";
    out<<str.arg(size)<<endl;

    return 0;
}
