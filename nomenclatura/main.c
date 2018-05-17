#include <stdio.h>
#include <stdlib.h>

int main()
{
    //punteros
    int *punteroNumero;//==int* punteroNumero
    int numero;
    int numeroDos;
    numero=66;
    numeroDos=&numero;

    punteroNumero=&numero;//asignacion de memoria
    printf("\na - %d",numeroDos);
    //*punteroNumero=&numero;
    //*punteroNumero=55;.
    numeroDos=&punteroNumero;//asignacion de valor
    printf("\nb - %d",numeroDos);
    printf("a- %d\n",numero);
    printf("b- %d\n",numeroDos);
    printf("c- %d\n",&numero);
    printf("d- %p\n",punteroNumero);//devuelve la direccion de memoria
    printf("e- %p\n",&punteroNumero);//devuelve la direccion de memoria
    printf("f- %d",*punteroNumero);//devuelve el valor
    return 0;
}
