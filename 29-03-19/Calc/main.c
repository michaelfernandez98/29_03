#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"



int main()
{
    char seguir='s';
    float A;
    float B;
    int suma;
    int resta;
    int division;
    int multiplicacion;
    int factorial;

    while(seguir=='s')
    {
        A=conseguirNumero();
        printf("El numero ingresado es: %.f\n",A);
    }

    return 0;
}

