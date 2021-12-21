#include "nonthreaddialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NonThreadDialog w;
    w.show();
    return a.exec();
}
