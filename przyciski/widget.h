#ifndef WIDGET_H
#define WIDGET_H

#include <QtWidgets>
#include "counterbutton.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    CounterButton *button;
    CounterButton *button2;
    QPushButton *resetButton;
};

#endif // WIDGET_H
