#include "command.h"
#include <QDebug>
#include <QFileInfoList>

ls::ls(QString cmd){
    QString output;
    if(cmd.contains("-a"))
    {
        QFileInfo file("ProjFile.txt");
        QString filename = file.absoluteFilePath();
        qDebug()<< filename;
    }
    else{
        QFileInfo file("ProjFile.txt");
        QString filename = file.fileName();
        qDebug()<< filename;
    }
    qDebug() << output;
}

