#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    button = new CounterButton("to jest przycisk!", this);
    button->move(100, 100);

    button2 = new CounterButton("to jest przycisk!", this);
    button2->move(100, 200);

    resetButton = new QPushButton("Reset", this);
    resetButton->move(100, 300);

    connect(resetButton, &QPushButton::clicked, button, &CounterButton::reset);
    connect(resetButton, &QPushButton::clicked, button2, &CounterButton::reset);
}

Widget::~Widget()
{

}
