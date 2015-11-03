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
    ls();
    QString input(QString cmd);
};
class touch {
    touch();

};
class cd{
    cd();
};
class pwd{
    pwd();

};
class rm {
public:
    rm();
    QString input(QString cmd);
};
class cat {
    cat();

};
class mkdir {
public:
    mkdir();
    QString input(QString cmd);
};

#endif // COMMAND_H



