#include <QtWidgets>
#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout;

    mainLayout->addWidget(new QTextEdit(this));

    QHBoxLayout *buttonLayout = new QHBoxLayout;

    auto btn = new QPushButton("Przycisk " + QString::number(0), this);
    buttonLayout->addWidget(btn);

    buttonLayout->addStretch(1);

    btn = new QPushButton("Przycisk " + QString::number(1), this);
    buttonLayout->addWidget(btn);

    //buttonLayout->addStretch(2);

    btn = new QPushButton("Przycisk " + QString::number(2), this);
    buttonLayout->addWidget(btn);

    mainLayout->addLayout(buttonLayout);

    this->setLayout(mainLayout);
    resize(800, 600);
}

Widget::~Widget()
{

}
