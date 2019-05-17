#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int cont,resultado=0;
    char palavra[46];
    printf("digite a palavra :\n");
    scanf("%s",&palavra);
    cont=strlen(palavra);
    cont=cont-1;
    while (cont>=0)
    {
        if (palavra[cont]=='a'||palavra[cont]=='e'||palavra[cont]=='i'||palavra[cont]=='o'||palavra[cont]=='u')
        {
            resultado++;
        }
       cont=cont-1;
    }
    printf("a quantidade de vogais e :%d",resultado);

}
