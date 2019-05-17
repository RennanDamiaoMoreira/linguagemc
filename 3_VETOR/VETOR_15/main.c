#include <stdio.h>1
#include <stdlib.h>

int main()
{
    int temperatura [30],minima,maxima,media,contador;
    printf("digite a temperatura do dia 1\n");
    scanf("%d",&temperatura[0]);
    minima=temperatura[0];
    maxima=temperatura[0];
    media=temperatura[0];
    for(contador=1; contador<5; contador++)
    {
        printf("digite a temperatura do dia %d\n",contador+1);
        scanf("%d",&temperatura[contador]);
        if (minima>temperatura[contador])
        {
            minima=temperatura[contador];
        }
        if (maxima<temperatura[contador])
        {
            maxima=temperatura[contador];
        }
        media=media+temperatura[contador];
    }
    media=media/contador;
    printf("\n\n\n\n\n\n\n\n\n\n\n_____________________\n");
    printf("temperatura media foi %d\n",media);
    printf("temperatura minima foi %d\n",minima);
    printf("temperatura maxima foi %d\n",maxima);
}
