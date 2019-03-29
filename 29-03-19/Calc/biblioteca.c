#include <stdio.h>
#include "biblioteca.h"

void menu(void)
{
    printf("1) Ingresar 1er operando (A=x)\n");
    printf("2)Ingresar 2do operando (B=y)\n");
    printf("3) Calcular todas las operaciones\n");
    printf("   a) Calcular la suma (A+B)\n");
    printf("   b) Calcular la resta (A-B)\n");
    printf("   c) Calcular la division (A/B)\n");
    printf("   d) Calcular la multiplicacion (A+B)\n");
    printf("   e) Calcular el factorial (A!)\n");
}
int conseguirNumero(void)
{
    int primerNumeroA;
    printf("Ingrese el primer operando (A=x)");
    scanf("%d",&primerNumeroA);
    return primerNumeroA;
}
