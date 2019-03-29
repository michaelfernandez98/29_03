#include <stdio.h>
#include <stdlib.h>

int main()
{
   // int numero;
 //   char letra;
    char palabra[10];

 //   printf("Ingrese un numero: \n");
   // scanf("%d",&numero);

    printf("Ingrese una palabra: ");
    setbuf(stdin,NULL);
    scanf("%s",palabra);


    printf("La palabra es %s ",palabra); //y el numero es %d",palabra,numero);
/*
    printf("Ingrese un numero: \n");
    scanf("%d",&numero);
    fflush(stdin);
    printf("Ingrese una letra: \n");
    scanf("%c",&letra);
    printf("El numero ingresado es %d. \nLa letra ingresada es %c.\n",numero,letra);
    system("pause");*/
    return 0;
}
