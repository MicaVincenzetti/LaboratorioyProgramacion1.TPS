#include "calculadora.h"


int suma(int a,int b)
{
    int r;
    r = a + b;
    return r;
}


int resta(int a, int b)
{
    int r;
    r = a - b;
    return r;
}


float division(int a, int b)
{
    float r;
    r = (float)a / b;
    return r;
}


int multiplicar(int a, int b)
{
    int r;
    r = a*b;
    return r;
}


int factorialA (int a)
{
    int r=1;
    int i;

    for(i=a; i >0 ; i--)
    {
        r = r*i;
    }
    return r;
}


int factorialB(int b)
{
    int r=1;
    int i;

    for(i=b; i >0 ; i--)
    {
        r = r*i;
    }
    return r;
}
