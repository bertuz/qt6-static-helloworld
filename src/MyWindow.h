//
// Created by matteo on 13/1/22.
//

#ifndef TST2_MYWINDOW_H
#define TST2_MYWINDOW_H

#include <QWidget>
#include <QPushButton>

class MyWindow : public QWidget
{
    Q_OBJECT
public:
    explicit MyWindow(QWidget *parent = 0);

    signals:
public slots:
private:
    QPushButton *m_button;
};

#endif //TST2_MYWINDOW_H
