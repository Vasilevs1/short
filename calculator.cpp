#include "calculator.h"
#include <QVBoxLayout>
#include "fraction.h"
Calculator::Calculator() : QWidget()
{
    setWindowTitle("СОКРАЩАТОР");
    numeratorBox=new QSpinBox;
    numeratorBox->setMinimum(1);
    numeratorBox->setMaximum(2147483640);
    denomeratorBox=new QSpinBox;
    denomeratorBox->setMinimum(1);
    denomeratorBox->setMaximum(2147483640);
    button=new QPushButton("Сократить");
    numeratorBox->setValue(f.numerator);
    denomeratorBox->setValue(f.denomerator);
    QVBoxLayout* layout=new QVBoxLayout;
    layout->addWidget(numeratorBox);
    layout->addWidget(denomeratorBox);
    layout->addWidget(button);
    this->setLayout(layout);
    connect(denomeratorBox,SIGNAL(valueChanged(int)),this,SLOT(setDenominator(int)));
    connect(numeratorBox,SIGNAL(valueChanged(int)),this,SLOT(setNumerator(int)));
    connect(button,SIGNAL(clicked(bool)),this,SLOT(fsh()));


}
void Calculator::fsh()
{
    f.fshort();
    numeratorBox->setValue(f.numerator);
    denomeratorBox->setValue(f.denomerator);

}
void Calculator::setNumerator(int numValue)
{
    f.numerator=numValue;
}
void Calculator::setDenominator(int denValue)
{
    f.denomerator=denValue;
}
