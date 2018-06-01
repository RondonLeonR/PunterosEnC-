#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{
    int* pVector;
    int* pAuxiliar;
    int i;
    pVector = (int*)malloc(sizeof(int)*TAM);//el malloc solo guarda un entero para tener una array hay que multiplicarlo

    if(pVector!=NULL)
    {
        for(i=0;i<TAM;i++)
        {
            *(pVector+i) = i+1;
        }

        for(i=0;i<TAM;i++)
        {
            printf("\t%d\n",*(pVector+i));
        }
        pAuxiliar = realloc(pVector, sizeof(int)* (TAM*2));
        if(pAuxiliar!=NULL)
        {
            pVector = pAuxiliar;
            for(i=TAM;i<TAM*2;i++)
            {
                *(pVector+i)=i+1;
            }
            printf("Dps del realloc\n");
            for(i=0;i<TAM*2;i++)
            {
            printf("\t%d\n",*(pVector+i));
            }

            pAuxiliar = (int)realloc(pVector,sizeof(int)*4);
            if(pAuxiliar!=NULL)
            {
                pVector = pAuxiliar;
                printf("dps del realloc por menos\n");
                for(i=0;i<4;i++)
                {
                    printf("\t%d\n",*(pVector+i));
                }
            }
            free(pVector);
        }

    }

    return 0;
}
