#include <command.h>
#include <QFile>
#include <QDir>

touch::touch(QString cmd){
    QString filename = cmd.mid(6);
    QDir homepath;
    QFile file(filename);
    if(file.exists(filename))
        qWarning("File already exists!\n");
    else{
        homepath.setCurrent("C:/Users/Venkant Raman/Documents/GitHub/gbash/workspace/");
        file.open(QIODevice::WriteOnly);
        file.close();
    }
}
