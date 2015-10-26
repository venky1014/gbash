#ifndef COMMAND_H
#define COMMAND_H

#include <QObject>
#include <QString>
#include <QThread>

/*class commandLine : public QObject{
    Q_OBJECT
public :
    explicit commandLine(QObject *parent = 0);
public slots :
    void HandleString(QString cmd);
signals :
    void onReadLine(QString cmd);
private:
    QThread thread;
};*/
//ok ^ this, this is a beast. this shit creates some random file calle moc_command.cpp ok.
//try uncommenting it and run the program
//it gives an error with all commands saying undefined reference to HandleString, as in none of the commands are read and dealt with properly
//so this is just the old code which i've sent you of 3 hours ago

class read {
public:
    virtual QString input(QString cmd) = 0;
};

class echo : public read
{
public:
    echo();
    QString echo1(QString);
    //QString echo1(QString, QChar);
    QString input(QString cmd);
};
class ls : public read
{
public :
    ls();
    QString input(QString cmd);
};
class touch : public read{
    touch();
   // QString input(QString cmd);
};
class cd{
    cd();
};
class pwd : public read{
    pwd();
   // QString input(QString cmd);
};
class rm : public read{
public:
    rm();
    QString input(QString cmd);
};
class cat : public read{
    cat();
   // QString input(QString cmd);
};
class mkdir : public read{
public:
    mkdir();
    QString input(QString cmd);
};

#endif // COMMAND_H



