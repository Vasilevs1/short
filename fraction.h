#ifndef FRACTION_H
#define FRACTION_H


class Fraction
{
public:
        Fraction(int n,int d);
        Fraction();
        int numerator;
        int denomerator;
        void fshort();
        void operator /(int a);
};
#endif // FRACTION_H
