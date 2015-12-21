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
    QStringList filters;
    filters << ".txt";
    if(cmd.contains("-a"))
    {
        QStringList names = file_list.entryList(QDir::Hidden);
        QString list = names.join(' ');
        out << list << endl;
    }
    else if(cmd.contains("-h") or cmd.contains("--help") or cmd.contains("-?")){
    parse.addHelpOption();
    parse.setApplicationDescription("\nLists all files in the current directory.\nUse -a opton to lists all files including hidden\n");
    out<< parse.helpText();}

    else{
        QDir make;
        make.setFilter(QDir::NoDotAndDotDot);
        make.setSorting(QDir::Unsorted);
        QStringList names = file_list.entryList(filters, QDir::NoDotAndDotDot, QDir::Unsorted);
        QString list = names.join(' ');
        out << list << endl;

    }
    out << output <<endl;
}

