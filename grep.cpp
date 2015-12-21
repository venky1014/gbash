#include "command.h"
#include "globals.h"
#include <QDir>
#include<QTextStream>

grep::grep(QString cmd){
    QTextStream out(stdout);
if(cmd.contains("-i")){
    QString input = cmd.mid(9);
    int subnum = input.indexOf(" ");
    QByteArray putt;
    QString filename = input.mid(subnum);
    QString substr = input.left(subnum);
    substr.toLower();
    QFile file(filename);
    file.open(QIODevice::ReadOnly);
    putt = file.readAll();
    file.close();
    //if(putt.contains(substr))
        out << "Found";
}
else{
 QString input = cmd.mid(5);
    int subnum = input.indexOf(" ");
    QByteArray putt;
    QString filename = input.mid(subnum);
    QString substr = input.left(subnum);
    QFile file(filename);
    file.open(QIODevice::ReadOnly);
    putt = file.readAll();
    file.close();
    //if(putt.contains(substr))
        out << "Found";}
}
