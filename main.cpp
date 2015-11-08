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
#include<QCommandLineParser>

extern bool qcondition;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QCommandLineParser parser;
    parser.addPositionalArgument("runtype", QCoreApplication::translate("main", "The run type required to run command line"));

    QCommandLineOption freerunOption(QStringList() << "f" << "free",
                QCoreApplication::translate("main", "Start console in free run"));
    parser.addOption(freerunOption);

    QCommandLineOption tutorialOption(QStringList() << "t" << "tutorial",
                QCoreApplication::translate("main", "Start console in tutorial mode"));
    parser.addOption(tutorialOption);

    parser.process(a);
    const QStringList args = parser.positionalArguments();
    bool free = parser.isSet(freerunOption);
    // if free is true - start in free run

    bool qs = true;
    QString user_str;

    QTextStream stream (stdin);
    QTextStream out (stdout);

    qDebug() << a.arguments() << free << args;// returns current working directory.

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

    else if(user_str.startsWith("ls")){
         out << "Work in progress";
         ls l(user_str);
    }

    else if (user_str.startsWith("pwd")){
        out << "Work in progress\n";
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

    else
         qWarning("Command not found\n");

    }while(qs);
    return 0;

    return a.exec();

}
