#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int indice, quantidade;
    char nome[70];
    printf("digite seu nome \n");
    gets(nome);
    quantidade=strlen(nome);
    for(indice=0; indice<quantidade; indice++)
    {
        printf("%c",nome[indice]);
        if (nome[indice]==' ')
        {
            printf("\n");
        }
    }
}


