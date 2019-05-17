#include <stdio.h>
#include <stdlib.h>
int main()
{
    int resp;
    char senha[9]= {'9','9','1','3','3','6','3','1','7'},acesso[13];
    printf("digite a senha\n");
    gets(acesso);
    if (strcmp(acesso,senha)==0){
        printf("senha correta, acesso permitido");
    }else{
     printf("senha incorreta, acesso negado");
    }
}
