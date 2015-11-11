#include <command.h>
#include <QFile>
#include <QDir>
#include <globals.h>

touch::touch(QString cmd){
    QString filename = cmd.mid(6);
    QDir homepath;
    QFile file(filename);
    if(file.exists(filename))
        qWarning("File already exists!\n");
    else{
        file.open(QIODevice::WriteOnly);
        file.close();
    }
}
