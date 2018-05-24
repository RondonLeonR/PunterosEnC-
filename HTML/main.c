#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f;
    char msj[]="Hola a todos";
    /*f = fopen("mihtml.html","w");
    if(f!=NULL)
    {
        fprintf(f,"<html><head>HOLA </head></html>");
        fclose(f);
    }*/

    f = fopen("mihtml2.html","w");
    if(f!=NULL)
    {
        fprintf(f,"<html><head>");
        fprintf(f,msj);
        fprintf(f,"</head></html>");
        fclose(f);
    }

    return 0;
}
