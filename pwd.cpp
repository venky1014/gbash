#include "command.h"
#include <QFileInfoList>
#include <QDir>
#include <QTextStream>
#include <QDebug>
#include "globals.h"

pwd::pwd(){
    QTextStream out (stdout);

    out << var_path;
}
