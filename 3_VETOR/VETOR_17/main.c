#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL;);
    char nome[30];

    printf ("digite o nome ");
    gets(nome);
    system("cls");

    for (int i=0; nome[i]!='\0'; i++){
        if (i==0||nome[i-1]==' ')
        {
            printf("%c",nome[i]);
        }
}
}
