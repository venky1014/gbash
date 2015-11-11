#include <command.h>
#include <QDir>
#include <QFile>
#include "globals.h"
#include <QTextStream>

cd::cd(QString cmd){
    QTextStream out (stdout);
    QString input = cmd.mid(3);
    QDir home;
    if(cmd.contains("--")){
       if(home.cdUp())
          out << "Directory changed\n";
}
    else{
     if(home.cd(input))
         out << "Directories changed\n";
}
}
