#ifndef COUNTERBUTTON_H
#define COUNTERBUTTON_H

#include <QtWidgets>

class CounterButton : public QPushButton
{
public:
    CounterButton(const QString &text, QWidget *parent);

public slots:
    void reset();

private:
    unsigned counter = 0;

private slots:
    void increaseCounter();
};

#endif // COUNTERBUTTON_H
