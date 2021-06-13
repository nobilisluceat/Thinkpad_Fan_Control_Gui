#include "tfcgui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    tfcgui w;
    w.setWindowTitle("ThinkPad Fan Control");
    w.resize(400, 400);
    w.show();
    return a.exec();
}
