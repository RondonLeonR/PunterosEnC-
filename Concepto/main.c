#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nombre[50];
}ePersona;

int ePer_setID(ePersona*,int);
int ePer_setNombre(ePersona*,char*);

int ePer_getID(ePersona*);
char* ePer_getNombre(ePersona*);

int getEspacioMemoria(ePersona*);

int main()
{

    ePersona* pPersona;

    pPersona = getEspacioMemoria(pPersona);

    //Reserva Dinamica de memoria = Malloc
    //malloc da una direccion de memoria al HEAD
    //definimos que tipo de dato queremos que devuelva (int*) ò (char*)en este caso (ePersona*)
    //malloc puede devolver NULL si no encuentra el espaciode memoria que pido
    if(pPersona!=NULL)
    {
        if(ePer_setID(pPersona,45)==-1)
        {
            printf("ID incorrecto.");
        }
        else
        {
        if(ePer_setNombre(pPersona,"Pedro")==-1)
            {
                printf("Nombre incorrecto");
            }
        else
            {
            printf("%d------%s",ePer_getID(pPersona),ePer_getNombre(pPersona));
            }
        }
    }


    return 0;
}

int ePer_setID(ePersona* this,int id)
{
    int retorno=-1;
    if(this!=NULL && id>0)
    {
        this->id=id;
        retorno=1;
    }
    return retorno;
}

int ePer_setNombre(ePersona* this,char* nombre)
{
    int retorno=-1;
    if(this!=NULL && nombre!=NULL && strlen(nombre)>3)
    {
        strcpy(this->nombre,nombre);
        retorno=1;
    }
    return retorno;
}

int ePer_getID(ePersona* this)
{
    int retorno=-1;
    if(this!=NULL)
    {
        retorno = this->id;
    }
    return retorno;
}

/*char ePer_getNombre(ePersona* this)
{
    char* retorno = NULL;
    if(this!=NULL)
    {
        retorno = this->nombre;
    }
    return retorno;
}*/


int getEspacioMemoria(ePersona* this)
{
    int retorno;
    retorno = (ePersona*)malloc(sizeof(ePersona));
    return retorno;
}

