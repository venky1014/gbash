#include "command.h"
#include <QString>
#include <QDebug>
#include <QFile>

using namespace std;
extern bool cond;
echo::echo(){

}
QString echo::echo1(QString str){

    return str;
}
QString echo::input(QString cmd){
   // int index = 0;
    QString output;

    if(cmd.contains(">>")){
        QFile file;
        file.setFileName("C:/Users/Venkant Raman/Documents/Avatar/Qt programs/Terminal_pro/ProjFile.txt");
        if (!file.exists())
            qDebug() << "File does not exist!";
        else
        {

            int index = cmd.indexOf(">>");
            //qDebug() << index;

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
            qDebug() << "File does not exist!";
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
        echo *obj = new echo;
        QString sub = cmd.mid(5);
        output = obj->echo1(sub);
    }
    return output;
}


