#include "command.h"
#include <QFileInfoList>
#include <QDir>
#include <QTextStream>
#include <QDebug>

pwd::pwd(){
    QTextStream out (stdout);
    QString output;
    QDir path;
    output = path.currentPath();
    out << output;
}
