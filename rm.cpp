#include "command.h"
#include <QDir>
rm::rm(){

}

QString rm::input(QString cmd)
{
    QString temp;
    QString dirNAME = cmd.mid(3);
    QDir path;
    bool created = path.rmdir(dirNAME);
    if(created ==true)
        temp = "Directories removed";
    return temp;
}
