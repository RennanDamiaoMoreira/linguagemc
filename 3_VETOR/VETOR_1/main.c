#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vet[5][5] = {1,2,2,2,2,3,1,2,2,2,3,3,1,2,2,3,3,3,1,2,3,3,3,3,1};
    int somaDiagonal=0,somaAcima=0,cont,i,contb,contc,somaBaixo=0,j;
    for(cont=4; cont>=0; cont--)
    {
        somaDiagonal=somaDiagonal+vet[cont][cont];
    }
    for(i=0,contb=1; i>=0&&i<5; i++,contb=i++)
    {
        for (; contb<5; contb++)
        {
            somaAcima=somaAcima+vet[i][contb];
        }
    }
    for(j=4,contc=3; j>0; j--,contc=j-1)
    {
        for (;contc>=0;contc--)
        {
            somaBaixo=somaBaixo+vet[j][contc];
        }
    }
    printf("soma da diagonal %d",somaDiagonal);
    printf("\nsoma da acima %d",somaAcima);
    printf("\nsoma da Abaixo %d",somaBaixo);
}
