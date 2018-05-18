#include <stdio.h>
#include <stdlib.h>

int cargarArray(int *array,int tam);
void mostrarArray(int *array,int tam);

int main()
{
    int vector[3];
    int *puntero;
    puntero = vector;
    int i;

    if(cargarArray(vector,3)==1)
    {
        printf("Carga Exitosa");
    }
    else
    {
        printf("Error al cargar los datos");
    }

    //mostrarArray(vector,3);

    return 0;
}

int cargarArray(int *array,int tam)
{
    int i;
    int retorno = 0;

    if(array!=NULL)
    {
        retorno=1;
        for(i=0; i<tam ; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d",array+i);
        }
    }
    return retorno;
}

void mostrarArray(int *array,int tam)
{
    int i;
    for(i=0; i<tam ; i++)
    {
        printf("%d\n", *(array+i));
    }
}
