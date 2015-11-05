#include "command.h"
#include <QString>
#include <QDebug>
#include <QFile>

using namespace std;
extern bool cond;

echo::echo(QString cmd){
    QString output;
    QTextStream out (stdout);
    if(cmd.contains(">>")){
        QFile file;
        file.setFileName("C:/Users/Venkant Raman/Documents/Avatar/Qt programs/Terminal_pro/ProjFile.txt");
        if (!file.exists())
            out << "File does not exist!\n";
        else
        {

            int index = cmd.indexOf(">>");
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
        QFile file;
        file.setFileName("C:/Users/Venkant Raman/Documents/Avatar/Qt programs/Terminal_pro/ProjFile.txt");
        if (!file.exists())
            out << "File does not exist!\n";
        else
        {

            int index = cmd.indexOf(">");
            QString in = cmd.remove(index, cmd.length());
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

    else {

        QString sub = cmd.mid(5);
        output = this->echo_n(sub);
    }

    out << output <<endl;
}


QString echo::echo_n(QString str){  // n = normal

    return str;
}



