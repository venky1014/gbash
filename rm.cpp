#include "command.h"
#include <QDebug>
#include <QDir>

rm::rm(QString cmd){
    QTextStream out (stdout);
    QString temp;
    QString dirNAME = cmd.mid(3);
    QDir path;
    bool created = path.rmdir(dirNAME);
    if(created ==true)
        temp = "Directories removed";
    out << temp << endl;
}
