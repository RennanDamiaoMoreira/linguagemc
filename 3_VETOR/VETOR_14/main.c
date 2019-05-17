#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int coluna,linha,somaTotal=0,somaSuperior=0,somaInferior=0,diagonal=0;
    for (linha=0; linha<5; linha++)
    {
        for(coluna=0; coluna<5; coluna++)
        {
            printf("%d\t",vet[linha][coluna]);
            somaTotal=somaTotal+vet[linha][coluna];
            if(coluna>linha)
            {
                somaSuperior=somaSuperior+vet[linha][coluna];

            }
            if(coluna<linha)
            {
                somaInferior=somaInferior+vet[linha][coluna];

            }
            if(coluna==linha)
            {
                diagonal=diagonal+vet[linha][coluna];
            }
        }
        printf("\n");
    }
    printf("soma total foi :: %d",somaTotal);
    printf("\nsoma Superior foi :: %d",somaSuperior);
    printf("\nsoma Inferior foi :: %d",somaInferior);
    printf("\n Diagonal :: %d",diagonal);
}
