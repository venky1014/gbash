#include <command.h>
#include <QDir>
#include <QFile>
#include "globals.h"
#include <QTextStream>

cd::cd(QString cmd){
    QTextStream out (stdout);
    QString input = cmd.mid(3);
    curr = QDir::current();
    if(cmd.contains("--")){
       if(curr.cdUp())
          out << "Directory changed" << endl;
}
    else{
     if(curr.cd(input))
         out << "Directories changed" << endl;
     else
         qWarning("Directory doesn't exist!\n");
    }
}
