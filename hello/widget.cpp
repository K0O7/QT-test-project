#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    for (unsigned i = 0; i < 3; ++i) {
        button[i] = new QPushButton("To jest przycisk! " + QString::number(i) , this);
        button[i]->move(150, 60 * i);
    }

}

Widget::~Widget()
{

}
