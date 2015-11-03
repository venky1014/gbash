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

    do{
        printf("$ ");
        user_str = stream.readLine();
        if(user_str.contains("exit"))
        {
            qs = false; //quit statement
            qcondition = false;
            qDebug() << "Thank You Agent";
            return 0;
        }

    if(user_str.startsWith("echo ") && qcondition == true){   // extra space to prevent echosdfsfd from working.
        echo e(user_str);   // make this dynamic if possible.
    }

    else if(user_str.startsWith("ls") && qcondition == true)
         qDebug() << "Work in progress";

    else if (user_str.startsWith("pwd") && qcondition == true)
         qDebug() << "Work in progress";

    else if(user_str.startsWith("clear") && qcondition == true)
         system("cls");

    else if(user_str.startsWith("mkdir") && qcondition == true)
         qDebug() << "Work in progress";

    else if(user_str.startsWith("rm") && qcondition == true)
        qDebug() << "Work in progress";
    else
        qDebug() << "Invalid command";

    }while(qs);

    return a.exec();

}
