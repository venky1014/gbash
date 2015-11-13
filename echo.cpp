#include "command.h"
#include "globals.h"
#include <QString>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QCommandLineParser>
using namespace std;

echo::echo(QString cmd){
    QTextStream out (stdout);

    QString output;
    if(cmd.contains(">>")){
        int index = cmd.indexOf(">>");
        int length = cmd.length();
        QString filename = cmd.right(length - index - 3);
        QFile file(filename);

        if (!file.exists())
            out << "File does not exist!\n";
        else
        {

            //out << index;

            QString in = cmd.remove(index, cmd.length());
            in = cmd.mid(5);
            string s = in.toStdString();
            QByteArray putt = s.c_str();

            file.open(QIODevice::Append | QIODevice::Text);
            file.write(putt);
            file.flush();
            file.close();
        }

    }
    else if (cmd.contains(">")){
        int index = cmd.indexOf(">");
        int length = cmd.length();
        QString filename = cmd.right(length - index - 2);
        QFile file(filename);
        if (!file.exists())
            out << "File does not exist!\n";
        else
        {
            QString in = cmd.remove(index, length);
            in = cmd.mid(5);
            string s = in.toStdString();
            QByteArray putt = s.c_str();

            file.open(QIODevice::WriteOnly | QIODevice::Text);
            file.write(putt);
            file.close();
        }
    }
    else if(cmd.contains("|")){

    }

    else if(cmd.contains("-h") or cmd.contains("--help") or cmd.contains("-?")){
        parse.addHelpOption();
        parse.setApplicationDescription("\nOutputs entered standard input back into the program\nUse >> followed by filename to append the standard input to that file\nUse > followed by the filename to overwrite contents of the file by the standard input\n ");
        out << parse.helpText();
    }

    else {

        QString sub = cmd.mid(5);
        output = this->echo_n(sub);

    }

    out << output <<endl;
}


QString echo::echo_n(QString str){  // n = normal

    return str;
}



