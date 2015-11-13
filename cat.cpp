#include <command.h>
#include <QFile>
#include <QDir>
#include <QTextStream>
#include "globals.h"
#include <QCommandLineParser>
using namespace std;

cat::cat(QString cmd){
    QTextStream out (stdout);
    //QDir home;

    if(cmd.contains("-h") or cmd.contains("--help") or cmd.contains("-?")){
    parse.addHelpOption();
    parse.setApplicationDescription("This command extracts the contents of the specified file and displays it as standard output\nUse > followed by a filename to overwrite the contents of that file by the standard output of the current command\nUse >> followed by a filename to append the standard output of the current command into that file\nUse \'|\' to pipe the standard output to another command\n");
    out << parse.helpText(); }

    else if(cmd.contains(">>")){
        int index = cmd.indexOf(">>");
        int length = cmd.length();
        QString filename = cmd.right(length - index - 3);
        QFile file(filename);

        if (!file.exists())
            out << "File does not exist!\n";
        else
        {

            QString in = cmd.remove(index, length);
            in = cmd.mid(4);
            QFile reader(in);
            reader.open(QIODevice::ReadOnly);
            QByteArray putt = reader.readAll();
            reader.close();

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
            in = cmd.mid(4);

            QFile reader(in);
            reader.open(QFile::ReadOnly);
            QByteArray putt = reader.readAll();
            out << putt << endl;
            reader.close();

            file.open(QIODevice::WriteOnly | QIODevice::Text);
            file.write(putt);
            file.close();

        }
       }

    else{
    QString filename  = cmd.mid(4);
    QFile file(filename);
    file.open(QIODevice::ReadOnly);
    QByteArray output = file.readAll();
    out << output << endl;
    file.close();
    }
}// need some more umph
