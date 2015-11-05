#include "command.h"
#include <QDebug>
#include <QDir>

mkdir::mkdir(QString cmd){
    QTextStream out (stdout);
    QString temp;
    QString dirNAME = cmd.mid(6);
    QDir path;
    bool created = path.mkdir(dirNAME);
    if(created ==true)
        temp = "Directories created";

    out << temp;
}
/*here there has to be a condition. if directory already exists
 should be diasbled */

