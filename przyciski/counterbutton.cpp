#include "counterbutton.h"

CounterButton::CounterButton(const QString &text, QWidget *parent)
    : QPushButton(text, parent)
{
    connect(this, &QPushButton::clicked, this, &CounterButton::increaseCounter);
}

void CounterButton::reset()
{
    counter = 0;
    setText("Reset!");
}

void CounterButton::increaseCounter()
{
    ++counter;
    setText("Clicks: " + QString::number(counter));
}
