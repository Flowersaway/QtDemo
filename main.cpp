#include "token.h"
#include <QApplication>
using namespace calc;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Token w;
    w.show();

    return a.exec();
}
