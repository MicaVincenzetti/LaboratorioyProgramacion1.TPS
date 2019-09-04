#include <stdlib.h>
#include "calculadora.h"

// LLamo a la biblioteca que contiene las funciones a utilizar en el main

int main()
{

    int x;
    int y;
    char opcion;
    float r;

do
{
        printf("\n **MENU CALCULADORA** \n");
        printf("1) Calcular la suma (A+B)\n");
        printf("2) Calcular la resta (A-B)\n");
        printf("3) Calcular la division (A/B)\n");
        printf("4) Calcular la multiplicacion (A*B)\n");
        printf("5) Calcular el factorial (A!)\n");
        printf("6) SALIR \n");
        fflush(stdin);
        scanf("%c", &opcion);

        do
        {
            printf( "\n   Introduzca opcion (1-6): " );
            fflush( stdin );
            scanf( "%c", &opcion);

        } while ( opcion < '1' || opcion > '6' );


        printf("\n *Ingrese el primer numero: ");
        scanf("%d", &x);
        printf("\n *Ingrese el segundo numero: ");
        scanf("%d", &y);


        switch(opcion)
        {
            case '1' :
                r = suma(x,y);
                printf("\n -El resultado de %d + %d = %.2f \n", x,y,r);
                break;

            case '2' :
                r = resta(x,y);
                printf("\n -El resultado de %d - %d = %.2f \n", x,y,r);
                break;

            case '3' :
                if(y != 0)
                {
                    r = division(x,y);
                    printf("\n -El resultado de %d / %d = %.2f \n", x,y,r);
                }else
                {
                    printf("\n ¡No se puede dividir por 0! \n");
                }
                break;

            case '4' :
                r = multiplicar(x, y);
                printf("\n -El resultado de %d * %d = %.2f \n", x, y, r);
                break;

            case '5' :
                if(x == '0')
                {
                    printf("\n -El factorial de %d es: 1 \n", x);
                }
                else
                if(x < 0)
                    {
                        printf("\n -El factorial de %d no se puede realizar \n",x);
                    }
                else
                    {
                        r = factorialA (x);
                        printf("\n -El factorial de %d es: %.2f \n", x, r);
                    }
                if(y == '0')
                    {
                        printf("\n -El factorial de %d es: 1 \n", y);
                    }
                else
                if(y < 0)
                    {
                        printf("\n -El factorial de %d no se puede realizar. \n",y);
                    }
                else
                    {
                        r = factorialB (y);
                        printf("\n -El factorial de %d es: %.2f \n", y, r);
                    }
                break;

        }

        system("pause");
        system("cls");

    }
    while(opcion != '6');

    return 0;

}
