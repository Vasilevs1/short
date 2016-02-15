#include "fraction.h"

Fraction::Fraction(int n,int d)
{
    numerator=n;
    denomerator=d;
}
Fraction::Fraction()
{
    numerator=1;
    denomerator=1;
}

void Fraction::operator /(int a)
{
    numerator=numerator/a;
    denomerator=denomerator/a;
}

void Fraction::fshort()
{
    int i;
    for(i=2;true;i++)
    {
        if((denomerator%i==0) && (numerator%i==0))
        {
         numerator=numerator/i;
         denomerator=denomerator/i;
        break;
        };
        if(i>2147483646) {break;};

    }

}
