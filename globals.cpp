#include "globals.h"
#include <QDir>
#include <QCommandLineParser>

QDir curr;
QString var_path = curr.canonicalPath();
QCommandLineParser parse;

