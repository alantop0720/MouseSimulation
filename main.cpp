#include "widget.h"

#pragma comment  (lib, "User32.lib")


#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
