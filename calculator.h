#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>
#include <QSpinBox>
#include <QPushButton>
#include "fraction.h"
class Calculator : public QWidget
{
    QSpinBox* numeratorBox;
    QSpinBox* denomeratorBox;
    QPushButton* button;
    Fraction f;
    Q_OBJECT
public:
     Calculator();

signals:

public slots:
     void fsh();
     void setDenominator(int denValue);
     void setNumerator(int numValue);
};

#endif // CALCULATOR_H
