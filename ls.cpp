#include "command.h"
#include <QDebug>
#include <QDir>
#include <QFileInfoList>
#include <QCommandLineParser>
#include "globals.h"
#include <QStringList>
#include <QCommandLineOption>

ls::ls(QString cmd){
    QTextStream out (stdout);
    QString output;
    QDir file_list;

    if(cmd.contains("-a"))
    {
        QStringList names = file_list.entryList();
        QString list = names.join(' ');
        out << list << endl;
    }
    else if(cmd.contains("-h") or cmd.contains("--help") or cmd.contains("-?")){
    parse.addHelpOption();
    parse.setApplicationDescription("\nLists all files in the current directory.\nUse -a opton to lists all files including hidden\n");
    out<< parse.helpText();}

    else{


    }
    out << output <<endl;
}

