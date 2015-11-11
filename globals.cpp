#include "globals.h"
#include <QDir>
#include <QCommandLineParser>
QDir home;
QString var_path = home.canonicalPath();
bool set_var = QDir::setCurrent(var_path);
QCommandLineParser parse;

