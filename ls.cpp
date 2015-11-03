#include "command.h"
#include <QDebug>
#include <QFileInfoList>
ls::ls(){

}

QString ls::input(QString cmd){
    QString output;
    if(cmd.contains("-a"))
    {
        QFileInfo file("ProjFile.txt");
        QString filename = file.absoluteFilePath();
        return filename;
    }
    else{
       // ls *obj = new ls;
        QFileInfo file("ProjFile.txt");
        QString filename = file.fileName();
        return filename;
    }
    return output;
}
