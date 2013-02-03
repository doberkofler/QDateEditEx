#include <QtGui/QApplication>
#include "dateedittest.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DateEditTest w2;
    w2.show();

    return a.exec();
}
