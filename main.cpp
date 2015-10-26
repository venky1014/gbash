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
 //OBJECTS
    echo *e = new echo;
    ls *l = new ls;
    mkdir *m = new mkdir;
    rm *r = new rm;
    QTextStream stream (stdin);




    //commandline!

    do{
        printf("$ ");
        user_str = stream.readLine();
        if(user_str.contains("quit"))
        {
            qs = false; //quit statement
               qcondition = false;
                 qDebug() << "Thank You Agent";
        break;
        } // i dont know how this might integrated with the gui

    if(user_str.startsWith("echo") && qcondition == true)
        qDebug() << e->input(user_str);

        else if(user_str.startsWith("ls") && qcondition == true)
        {
         qDebug() << l->input(user_str);

        }
            else if (user_str.startsWith("pwd") && qcondition == true)
             qDebug() << "Work in progress";

                else if(user_str.startsWith("clear") && qcondition == true)
                    system("cls");

                     else if(user_str.startsWith("mkdir") && qcondition == true)
                        m->input(user_str);

                         else if(user_str.startsWith("rm") && qcondition == true)
                            r->input(user_str);
    else
        qDebug() << "Invalid command";
    }while(qs != false);

    return a.exec();

}
