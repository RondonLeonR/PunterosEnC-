#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int a;
    char b;
}eDato;

void funcion1();
void funcion2();
void funcion2b();
void funcion3();

int main()
{
    //funcion1();
    //funcion2();
    //funcion2b();
    funcion3();
    return 0;
}

void funcion1()
{
    FILE* miArchivo;
    int numero = 64;

   /* miArchivo = fopen("prueba1.txt","w");//Si el archivo no existe el fopen lo crea
    fwrite(&numero,sizeof(int),1,miArchivo);//fwrite sirve para escribir, primero le pasa el valor de numero se puede pasar un puntero tambien
                                            //sizeof devuelve el peso de la cantidad de datos (se ajusta al tamaño de datos de cualquier estructura)
                                            //Por ultimo recibe el puntero a archivo
    fclose(miArchivo);*/

    miArchivo = fopen("prueba1.txt","r");//Abro el archivo pero para leer

    fread(&numero,sizeof(int),1,miArchivo); //fread recibe lo mismo que el fwrite, solo cambian los roles de las varibles
                                            //Le decimos donde va a guardar y al ultimo le pasamos que va a guardar
    fclose(miArchivo);
    printf("NUMERO: %d", numero);
}

void funcion2()
{
    FILE* miArchivo;
    int i=0;
    int numero;
    int lista[5];//={1,5,9,6,4};

    /*miArchivo = fopen("Prueba22.txt","w");

    for(i=0;i<5;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numero);

        fwrite(&numero,sizeof(int),1,miArchivo);
    }

    fclose(miArchivo);*/

    miArchivo = fopen("prueba22.txt","r");
    i=0;
    while(!feof(miArchivo))
    {
        fread(&lista[i],sizeof(int),1,miArchivo);
        /*if(feof(miArchivo))//Funciona para binario, feof siempre devuelve 0
        {
            break;
        }
        fread(&numero,sizeof(int),1,miArchivo);

        printf("%d\n", numero);*/
        i++;
    }

    fclose(miArchivo);

    for(i=0;i<5;i++)
    {
        printf("%d\n",lista[i]);
    }
}

void funcion2b()
{
    FILE* miArchivo;
    int i;
    int numero;
    int lista[5]={1,5,9,6,4};

    /*miArchivo = fopen("prueba3","w");

    fwrite(lista,sizeof(int),5,miArchivo);
    fclose(miArchivo);*/

    miArchivo = fopen("prueba3.txt","r");

    fread(lista,sizeof(int),5,miArchivo);

    fclose(miArchivo);
    for(i=0;i<5;i++)
    {
        printf("%d\n",lista[i]);
    }

}

void funcion3()
{
    FILE* miArchivo;
    eDato d = {1,'B'};

    /*miArchivo = fopen("miBinario.dat","wb")//Podria no usar alguna extension ej miBinario.bin (.dat)

    if(miArchivo!=NULL)
    {
        fwrite(%d,sizeof(eDato),1,miArchivo);
        fclose(miArchivo);
    }*/

    miArchivo = fopen("miBinario.dat","rb");

    if(miArchivo!=NULL)
    {
        fread(&d,sizeof(eDato),5,miArchivo);
        fclose(miArchivo);

        printf("%d %c",d.a, d.b);
    }

}

