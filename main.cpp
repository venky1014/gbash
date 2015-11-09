#include <QCoreApplication>
#include <iostream>
#include <string.h>
#include <QProcess>
#include <QString>
#include <QTextStream>
#include <QDir>
#include <QFile>
#include "command.h"
#include <QDebug>

extern bool qcondition;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    bool qs = true;
    QString user_str;

    QTextStream stream (stdin);
    QTextStream out (stdout);

    do{
        printf("$ ");
        user_str = stream.readLine();
        if(user_str.contains("exit"))
        {
            qs = false; //quit statement
            qcondition = false;
            out << "Thank You\n";
            break;
        }

    if(user_str.startsWith("echo ")){   // extra space to prevent echosdfsfd from working.
        echo e(user_str);   // make this dynamic if possible.

    }

    else if(user_str.startsWith("ls ")){
         ls l(user_str);
    }

    else if (user_str.startsWith("pwd")){
        pwd p();
    }

    else if(user_str.startsWith("clear"))
         system("cls");

    else if(user_str.startsWith("mkdir ")){
         out << "Work in progress";
        mkdir m(user_str);
    }

    else if(user_str.startsWith("rm ")){
        out << "Work in progress";
        rm r(user_str);
    }

    else if(user_str.startsWith("touch ")){
        touch t(user_str);
    }

    else if(user_str.startsWith("cat ")){
        cat c(user_str);
    }

    else if(user_str.startsWith("cd "))
        cd c(user_str);

    else
         qWarning("Command not found\n");

    }while(qs);
    return 0;

    return a.exec();

}
