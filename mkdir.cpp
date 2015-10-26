#include "command.h"
#include <QDir>
mkdir::mkdir(){

}
/*here there has to be a condition. if directory already exists
 should be diasbled */
QString mkdir::input(QString cmd)
{
    QString temp;
    QString dirNAME = cmd.mid(6);
    QDir path;
    bool created = path.mkdir(dirNAME);
    if(created ==true)
        temp = "Directories created";
    return temp;
}

