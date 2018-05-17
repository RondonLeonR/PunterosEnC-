#include <stdio.h>
#include <stdlib.h>
void Mostrar(int *puntero, int cantidad);
int main()
{
    int numeros[3];
    int *puntero;
    int aux=333;
    puntero=numeros;
    numeros[0]=9;
    numeros[1]=99;
    numeros[2]=999;
    printf("\nPuntero:\t  %d",*(puntero));
    printf("\nPuntero:\t  %d",*(puntero+1));
    printf("\nPuntero:\t  %d",*(puntero+2));
    printf("\nPuntero:\t  %d",*(puntero+3));
    printf("\nPuntero:\t  %d",*(puntero+4));
    Mostrar(numeros,3);
    return 0;
}

void Mostrar(int *puntero, int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("\nNumero:  %d",*(puntero+i));
    }
}


