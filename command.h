#ifndef COMMAND_H
#define COMMAND_H

#include <QObject>
#include <QString>
#include <QThread>

class echo{

public:
    echo(QString);
    QString echo_n(QString); // n for unparameterized
    QString echo_a(QString); // for -a
    QString echo_s(QString); // for -s
    QString echo_t(QString); // for -t      don't know if these exist. Just examples.
};

class ls{
    public :
        ls(QString);

};

class touch{
    public :
        touch(QString);
};

class cd{
    public :
        cd(QString);
};

class pwd{
    public :
        pwd(QString);

};

class rm {
    public:
    rm(QString);

};

class cat {
    public :
        cat(QString);

};

class mkdir {
    public:
        mkdir(QString);

};

#endif // COMMAND_H



