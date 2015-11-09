#include <command.h>
#include <QDir>
#include <QFile>

cd::cd(QString cmd){
    QDir home;
    home.setCurrent("C:Users/Venkant Raman/Documents/GitHub/gbash/workspace/");
    QString input = cmd.mid(4);
    if(cmd.contains("--"))
        home.cdUp();
    else
     home.cd(input);
}
