#include <QApplication>

#include <QtPlugin>
#include "MyWindow.h"

Q_IMPORT_PLUGIN(QCocoaIntegrationPlugin)

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWindow w;

    w.show();

    return a.exec();
}