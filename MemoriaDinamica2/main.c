#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nombre[50];
}ePersona;

int main()
{
    ePersona* pPersona;

    pPersona = (ePersona*)malloc(sizeof(ePersona));
    //Reserva Dinamica de memoria = Malloc
    //malloc da una direccion de memoria al HEAD
    //definimos que tipo de dato queremos que devuelva (int*) ò (char*)en este caso (ePersona*)
    //malloc puede devolver NULL si no encuentra el espaciode memoria que pido
    if(pPersona!=NULL)
    {
        pPersona->id=45;
        strcpy(pPersona->nombre,"Juan");

        printf("%d------%s",pPersona->id,pPersona->nombre);
    }


    return 0;
}
