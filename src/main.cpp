#include <QApplication>

#include <QtPlugin>
#include <QProgressBar>
#include <QSlider>
#include "MyWindow.h"

Q_IMPORT_PLUGIN(QCocoaIntegrationPlugin)

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWindow w;


    // Create a progress bar
    // with the range between 0 and 100, and a starting value of 0
    QProgressBar *progressBar = new QProgressBar(&w);
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setGeometry(10, 50, 180, 30);


    // Create a horizontal slider
    // with the range between 0 and 100, and a starting value of 0
    QSlider *slider = new QSlider(&w);
    slider->setOrientation(Qt::Horizontal);
    slider->setRange(0, 100);
    slider->setValue(0);
    slider->setGeometry(10, 80, 180, 30);

    w.show();

    // Connection
    // This connection set the value of the progress bar
    // while the slider's value changes
    QObject::connect(slider, SIGNAL (valueChanged(int)), progressBar, SLOT (setValue(int)));

    return a.exec();
}