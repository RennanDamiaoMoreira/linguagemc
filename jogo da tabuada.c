#include <stdio.h>
#include <time.h>
#include <locale.h>
/*feito por Rennan Damião Moreira
o jogo se baseia em treinar os cálculos matemático
do usuário, separado em 3 níveis soma,soma subtração,soma subtração multiplicação.
*/
void wait ( int seconds )
{
    clock_t endwait;
    endwait = clock () + seconds * CLK_TCK;
    while (clock() < endwait) {}
}
int nivel3 ()
{
    setlocale(LC_ALL,"");
    int resposta,var1,var2,cont=0,operacao,resultado;
    srand(time(NULL));
    do
    {
        system("cls");
        var1=rand()%11;
        var2=rand()%11;
        operacao=rand ()%3;
        switch (operacao)
        {
        case 0:
            printf("%d+%d\n",var1,var2);
            scanf("%d",&resposta);
            resultado=var1+var2;
            break;
        case 1:
            if (var1>var2)
            {
                printf("%d-%d\n",var1,var2);
                scanf("%d",&resposta);
                resultado=var1-var2;
                break;
            }
            else
            {
                printf("%d-%d\n",var2,var1);
                scanf("%d",&resposta);
                resultado=var2-var1;
                break;
            }

        case 2:
            printf("%dX%d\n",var1,var2);
            scanf("%d",&resposta);
            resultado=var1*var2;
            break;
        }

        if (resposta==resultado)
        {
            cont=cont+1;
        }
    }
    while(resposta==resultado);

    printf("\n\n_____________________\nQue pena você errou a resposta certa e %d\nvocê acertou %d respostas\n",resultado,cont);
    system("pause");
}
int nivel1 ()
{
    setlocale(LC_ALL,"");
    int resposta,var1,var2,cont=0,operacao,resultado;
    srand(time(NULL));
    do
    {
        system("cls");
        var1=rand()%11;
        var2=rand()%11;
        printf("%d+%d\n",var1,var2);
        scanf("%d",&resposta);
        resultado=var1+var2;



        if (resposta==resultado)
        {
            cont=cont+1;
        }
    }
    while(resposta==resultado);

    printf("\n\n_____________________\nQue pena você errou a resposta certa e %d\nvocê acertou %d respostas\n",resultado,cont);
    system("pause");
    return 0;
}
int nivel2 ()
{
    setlocale(LC_ALL,"");
    int resposta,var1,var2,cont=0,operacao,resultado;
    srand(time(NULL));
    do
    {
        system("cls");
        var1=rand()%11;
        var2=rand()%11;
        operacao=rand ()%2;
        switch (operacao)
        {
        case 0:
            printf("%d+%d\n",var1,var2);
            scanf("%d",&resposta);
            resultado=var1+var2;
            break;
        case 1:
            if (var1>var2)
            {
                printf("%d-%d\n",var1,var2);
                scanf("%d",&resposta);
                resultado=var1-var2;
                break;
            }
            else
            {
                printf("%d-%d\n",var2,var1);
                scanf("%d",&resposta);
                resultado=var2-var1;
                break;
            }
        }

        if (resposta==resultado)
        {
            cont=cont+1;
        }
    }
    while(resposta==resultado);

    printf("\n\n_____________________\nQue pena você errou a resposta certa e %d\nvocê acertou %d respostas\n",resultado,cont);
    system("pause");
}
int main()
{
    char resp;
    int execucao;
    int n;
    for (n=3; n>0; n--)
    {
        printf ("%d\n",n);
        wait (1);
        system("cls");
    }
    printf ("digite qual nivel deseja fazer\n1, 2, 3, ");
    scanf("%c",&resp);
    if (resp=='1')
    {
        nivel1();
    }
    else
    {
        if (resp=='2')
        {
            nivel2();
        }
        else
        {
            if (resp=='3')
            {
                nivel3();
            }

        }
    }
}
