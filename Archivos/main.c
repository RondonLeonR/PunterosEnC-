#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pArchivo;
    char cadena[50]="hola ";

    /*pArchivo = fopen("Archivo2.txt","w");//w para escribir, r solo para leer
    //fopen Si no encuentra el archivo devuelve NULL
    if(pArchivo!=NULL)
    {
        fprintf(pArchivo,"%s %d",cadena,156);//Al fprintf solo se le puede pasar un string
        fclose(pArchivo);
        printf("Guardado!");
    }
    else
    {
        printf("Imposible guardar");
    }*/

    pArchivo = fopen("Archivo2.txt","r");

    if(pArchivo!=NULL)
    {
        while(!feof(pArchivo))
        {
            fgets(cadena,50,pArchivo);//fgets lee linea por linea, por eso se usa este while
            puts(cadena);
        }
        fclose(pArchivo);
    }
    return 0;
}
