//
// Created by matteo on 13/1/22.
//

#include "MyWindow.h"
#include <iostream>
#include <QApplication>

MyWindow::MyWindow(QWidget *parent) :
        QWidget(parent) {

    // Set size of the window
    setFixedSize(300, 150);

    // Create and position the button
    m_button = new QPushButton("Exit", this);
    m_button->setGeometry(10, 10, 80, 30);
    m_button->setCheckable(true);
    connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));

    m_button = new QPushButton("Check", this);
    m_button->setGeometry(150, 10, 80, 30);
    m_button->setCheckable(true);
    connect(m_button, SIGNAL (clicked(bool)), this, SLOT (slotButtonClicked(bool)));
    connect(this, SIGNAL (counterReached()), QApplication::instance(), SLOT (quit()));

    std::cout << "Executing my window! \n";
}

void MyWindow::slotButtonClicked(bool checked) {
    if (checked) {
        buttonClicks++;

        if(buttonClicks >= 10) {
            emit counterReached();
            return;
        }

        m_button->setText("Checked");
    } else {
        if (buttonClicks >= 9) {
            m_button->setText("Click&exit");
            return;
        }
        m_button->setText("Unchecked");
    }
}