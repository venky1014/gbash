#include "command.h"
#include <QDebug>
#include <QFileInfoList>

ls::ls(QString cmd){
    QTextStream out (stdout);
    QString output;
    if(cmd.contains("-a"))
    {
        QFileInfo file("ProjFile.txt");
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

