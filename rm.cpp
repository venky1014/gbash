#include "command.h"
#include <QDebug>
#include <QDir>
#include "globals.h"

rm::rm(QString cmd){
    QTextStream out (stdout);
    QString dirNAME = cmd.mid(3);
    QDir path;
    if(cmd.contains(".txt"))
    path.remove(dirNAME);
    else if(cmd.contains(" -r"))
        path.removeRecursively();
    else
      path.rmdir(dirNAME);
}
