#include "command.h"
#include <QDebug>
#include <QDir>
#include "globals.h"

rm::rm(QString cmd){
    QTextStream out (stdout);
    QString temp;
    QString dirNAME = cmd.mid(3);
    QDir path;
    bool removed = path.rmdir(dirNAME);
    if(removed)
        temp = "Directories removed";
    out << temp << endl;
}
