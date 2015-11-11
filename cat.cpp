#include <command.h>
#include <QFile>
#include <QDir>
#include <QTextStream>
#include "globals.h"

cat::cat(QString input){
    QDir home;
    //home.setCurrent("C:/Users/Venkant Raman/Documents/GitHub/gbash/workspace/");
    QTextStream out (stdout);
    QString filename  = input.mid(4);
    QFile file(filename);
    file.open(QIODevice::ReadOnly);
    QByteArray output = file.readAll();
    out << output << endl;

}// need some more umph
