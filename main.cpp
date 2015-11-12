#include <QCoreApplication>
#include <iostream>
#include <string.h>
#include <QProcess>
#include <QString>
#include <QTextStream>
#include <QDir>
#include <QFile>
#include "command.h"

#include<QUrl>
#include<QCommandLineParser>
#include<QDebug>
#include "globals.h"


extern bool qcondition;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QCoreApplication::setApplicationName("gbash");
    QCoreApplication::setApplicationVersion("1.0");

    bool qs = true;

    QString user_str;
    QTextStream stream (stdin);
    QTextStream out (stdout);

    out << "                          Welcome to the gBash terminal" << endl;
    out<<"                 (-t) Tutorial   (-m, n) Missions  (-f) Freeplay  " << endl << endl << endl;


    QString program = "D:/Cpp/qt/build-BashGUI-Desktop_Qt_5_5_0_MinGW_32bit-Debug/debug/BashGUI";
    QStringList arguments;

    QProcess *myProcess = new QProcess;

    do{
        printf("$ ");
        user_str = stream.readLine();
        if(user_str.contains("exit"))
        {
            qs = false; //quit statement
            out << "Thank You\n";
            break;
        }
     else if(user_str.startsWith("freeplay")){

            myProcess->start(program, arguments);
            // write t to file
        }



    else if(user_str.startsWith("echo ")){   // extra space to prevent echosdfsfd from working.
        echo e(user_str);   // make this dynamic if possible.

    }

    else if(user_str.startsWith("ls")){
         ls l(user_str);
    }

    else if (user_str.startsWith("pwd")){
        pwd *p = new pwd;
        p->output_path();
    }

    else if(user_str.startsWith("clear"))
         system("cls");

    else if(user_str.startsWith("mkdir ")){
        mkdir m(user_str);
    }

    else if(user_str.startsWith("rm ")){
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
