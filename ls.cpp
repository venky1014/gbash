#include "command.h"
#include <QDebug>
#include <QDir>
#include <QFileInfoList>
#include <QCommandLineParser>


ls::ls(QString cmd){
    QTextStream out (stdout);
    QString output;
    if(cmd.contains("-a"))
    {
        QFileInfo file;
        QString filename = file.absoluteFilePath();
        out<< filename;
    }
    else{
        QFileInfo file("ProjFile.txt");
        QString filename = file.fileName();
        out<< filename ;
    }
    out << output <<endl;
}

