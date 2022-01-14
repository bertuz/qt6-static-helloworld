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
    void counterReached();
public slots:
private slots:
    void slotButtonClicked(bool checked);
private:
    QPushButton *m_button;
    unsigned int buttonClicks{0};
};

#endif //TST2_MYWINDOW_H
