#include <stdio.h>
#include <stdlib.h>
#define MAX 3
typedef struct banco
{
    int cod;
    float valor;
    char nome[20];
    int quantidade;
} ;
struct banco produto[MAX];
void iniciacao();
void consultaDeESTOQUE();
void vendaDeMERCADORIA();
void entradaDeESTOQUE();
void atualizacaoDePRECO();

int main()
{

    iniciacao();
    int resposta,sair;
    do
    {
        printf("1= consulta de estoque\n2= venda de mercadoria\n3=entrada de estoque\n4=atualizar preco");
        scanf("%d",&resposta);
        switch (resposta)
        {
        case 1:
            system ("cls");
            consultaDeESTOQUE();
            printf("para sair digite 1");
            scanf("%d",&sair);
            break;
        case 2:
            system("cls");
            vendaDeMERCADORIA();


            printf("Dados gravados com sucesso!");
            printf("para sair digite 1");
            scanf("%d",&sair);
            break;
        case 3:
            system("cls");
            entradaDeESTOQUE();
            printf("para sair digite 1");
            scanf("%d",&sair);
            break;
        case 4:
            system("cls");
            atualizacaoDePRECO();
            printf("para sair digite 1");
            scanf("%d",&sair);
            break;

        }
    }
    while(1!=sair);
}
void iniciacao()
{
    for (int i=0; i<MAX; i++)
    {
        produto[i].cod=i;
        printf("digite o nome do produto %d",i+1);
        gets(produto[i].nome);
        produto[i].quantidade=0;
    }
}
void consultaDeESTOQUE()
{

    int codigo;
    system ("cls");
    printf ("digite o codigo do produto ");
    scanf("%d",&codigo);

    for (int i=0; i<MAX; i++)
    {
        if (codigo==(produto[i].cod))
        {
            printf("%s\n",produto[i].nome);
            printf("%d unidades disponiveis\n",produto[i].quantidade);
        }
    }
}
void vendaDeMERCADORIA()
{
    FILE *pont_arq;
    pont_arq = fopen("cupom_fiscal.txt", "w");

    int codigo;
    int unidades;
    float total=0;
    int resposta;
    fprintf(pont_arq, "Supermercado Rennan\n");
    do
    {
        system ("cls");
        printf ("digite o codigo do produto ");
        scanf("%d",&codigo);

        for (int i=0; i<MAX; i++)
        {
            if (codigo==(produto[i].cod))
            {
                printf("%s\n",produto[i].nome);
                printf("digite a quantidade a ser comprada\n");
                scanf("%d",&unidades);
                produto[i].quantidade=produto[i].quantidade-unidades;
                system ("cls");
                printf("%s\n",produto[i].nome);
                printf("%d unidades\n",unidades);
                printf("preco unitario %.2f\n",produto[i].valor);
                printf("total R$::%.2f",produto[i].valor*unidades);
                getch();
                total=total+produto[i].valor*unidades;
                fprintf(pont_arq, "cod.%d-%s\nunidades %d\nvalor unitario R$%.2f\ntotal %.2f\n________________________________\n",produto[i].cod,produto[i].nome,unidades,produto[i].valor,produto[i].valor*unidades);
            }
        }
        system ("cls");
        printf("repetir=1 sair=0");
        scanf("%d",&resposta);
    }
    while(resposta==1);
    fprintf(pont_arq, "total R$%.2f\n\nVOLTE SEMPRE!",total);
    fclose(pont_arq);

}
void entradaDeESTOQUE()
{
    int codigo;
    int unidades;
    system ("cls");
    printf ("digite o codigo do produto ");
    scanf("%d",&codigo);

    for (int i=0; i<MAX; i++)
    {
        if (codigo==(produto[i].cod))
        {
            printf("%s\n",produto[i].nome);
            printf("digite a quantidade que entra no estoque\n");
            scanf("%d",&unidades);
            produto[i].quantidade=produto[i].quantidade+unidades;
            system ("cls");

        }
    }
}
void atualizacaoDePRECO()
{
    int codigo;
    int unidades;
    system ("cls");
    printf ("digite o codigo do produto ");
    scanf("%d",&codigo);

    for (int i=0; i<MAX; i++)
    {
        if (codigo==(produto[i].cod))
        {
            printf("%s\n",produto[i].nome);
            printf("digite o novo valor\n");
            scanf("%f",&produto[i].valor);

        }
    }
}
