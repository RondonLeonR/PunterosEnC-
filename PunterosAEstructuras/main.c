#include <stdio.h>
#include <stdlib.h>
typedef struct{

    int a;
    char b;

}eDato;

int main()
{
    /*eDato d;
    d.a=5;
    d.b='<';

    eDato *pDato;
    pDato = &d; //Devuelve la direccion de memoria de esa variable &

    //printf("TAM: %d\n", sizeof(void));
    printf("%d--%c", pDato->a, pDato->b);*/
    eDato l[2]={{1,'a'},{1,'b'}};
    eDato *pLista;

    pLista = l;

    int i;
    for(i=0;i<2;i++)
    {
        //printf("%d--%c\n", (*(pLista+i)).a, (*(pLista+i)).b );
        printf("%d--%c\n", (pLista+i)->a, (pLista+i)->b );
    }




    return 0;
}
