#include <stdio.h>
#include <stdlib.h>
int main()
{
    char vetor[2][12];
    printf("DIGITE SEU NOME\n");
    gets( &vetor[0]);
    printf("DIGITE SUA SAUDACAO\n");
    gets( &vetor[1]);
    printf("\n_______________\n%s",vetor[1]);
    printf("\n%s",vetor[0]);
}
