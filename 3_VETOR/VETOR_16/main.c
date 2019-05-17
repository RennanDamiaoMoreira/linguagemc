#include <stdio.h>
#include <stdlib.h>
#define SEMENTE 5
#include <locale.h>

int main()
{
   setlocale (LC_ALL,"");
    float notaGerminacao[SEMENTE];
    int i,acimaMedia=0;
    float media=0,porcentagem;
    for(i=0; i<SEMENTE; i++)
    {
        printf("digite a nota da semente %d :",i+1);
        scanf("%f",&notaGerminacao[i]);
        media=media+notaGerminacao[i];
        system("cls");
    }
    media=media/SEMENTE;
    for (i=0; i<SEMENTE; i++)
    {
        if (notaGerminacao[i]>media)
        {
            acimaMedia=acimaMedia+1;
        }
    }
    porcentagem=(acimaMedia*100)/SEMENTE;
    printf("A porcentagem da relação das sementes acima da media equivale a : %.f%% ",porcentagem);
    printf("\nA quantidade de sementes acima da media e : %d", acimaMedia);
    printf("a media das sementes é de : %.2f",media);




}
