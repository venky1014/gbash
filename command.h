#ifndef COMMAND_H
#define COMMAND_H

#include <QObject>
#include <QString>
#include <QThread>

class echo{

public:
    echo(QString);
    QString echo_n(QString); // n for unparameterized
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
      pwd();
      void output_path();
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
class grep {
public :
    grep(QString);
};

#endif // COMMAND_H



