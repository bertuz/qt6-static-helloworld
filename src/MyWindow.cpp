//
// Created by matteo on 13/1/22.
//

#include "MyWindow.h"
#include <iostream>
#include <QApplication>

MyWindow::MyWindow(QWidget *parent) :
        QWidget(parent) {

    // Set size of the window
    setFixedSize(200, 100);

    // Create and position the button
    m_button = new QPushButton("Exit", this);
    m_button->setGeometry(10, 10, 80, 30);
    connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));

    std::cout << "Executing my window! \n";
}
