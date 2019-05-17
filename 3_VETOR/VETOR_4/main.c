#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char entrada[10];
    int tamanho;
    printf("digite a palavra\n");
    gets(entrada);
    tamanho=strlen(entrada);
    for(tamanho--; tamanho>=0; tamanho--)
    {
        printf("%c",entrada[tamanho]);
    }
}
