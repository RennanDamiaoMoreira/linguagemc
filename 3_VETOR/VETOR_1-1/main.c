#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5][5] = {1,2,2,2,2,3,1,2,2,2,3,3,1,2,2,3,3,3,1,2,3,3,3,3,1},diagonal,acima,abaixo,contador,linha,coluna;
diagonal=0;
acima=0;
abaixo=0;
    for(linha=0; linha<0; linha++)
    {
        for(coluna=0; coluna<5; coluna++)
        {
            if (linha==coluna)
            {
                diagonal=diagonal+vet[linha][coluna];
            }
            if (coluna>linha)
            {
                acima=acima+vet[linha][coluna];
            }
            if (coluna<linha)
            {
                abaixo=abaixo+vet[linha][coluna];
            }
        }
    }
    printf("diagonal == %d\n",diagonal);
    printf("acima == %d\n",acima);
    printf("abaixo == %d\n",abaixo);
}
