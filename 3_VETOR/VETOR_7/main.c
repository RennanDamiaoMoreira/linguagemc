#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
//entrada de dados
    int quantidade,sorteio,repeticao=1,i;
    printf("digite a quantidade de faces :");
    scanf("%d",&quantidade);
    printf ("\nquantidade de repeticao: ");
    scanf("%d",&repeticao);
//quantidade==face
//repeti��o== numero de sorteios
//i== indice de controle, � usado nos 3 for a seguir


    int sorteado[quantidade];//vetor


//zerar vari�vel
    for(i=quantidade-1; i>=0; i--)
    {
        sorteado[i]=0;
    }

//sorteio
    for(i=repeticao; i>0; i--)
    {
        sorteio=(rand()%quantidade)+1;//a vari�vel sorteio ir� receber o numero sorteado
        sorteado[sorteio-1]=sorteado[sorteio-1]+1;//o vetor na posi��o anterior ao valor da vari�vel sorteio ter� o incremento de uma unidade ao seu valor anterior
    }

//rela��o do sorteio
    printf("\f");//limpa a tela
    for( i=0; i<quantidade; i++)
    {
        printf("%d=%d\n",i+1,sorteado[i]);//apenas ir� mostrar o resultado
    }
}
