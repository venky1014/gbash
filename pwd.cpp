#include "command.h"
#include <QFileInfoList>
#include <QDir>
#include <QTextStream>
#include "globals.h"

pwd::pwd(){

}
void pwd::output_path(){
    QTextStream out (stdout);

    out << var_path << endl;
}
