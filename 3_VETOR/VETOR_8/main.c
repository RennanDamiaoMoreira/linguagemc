#include <stdio.h>
#include <stdlib.h>

int main()
{
  int faturamento=0, vendas[30], preco;
  for(int i=0;i<30;i++){
    printf("\ndigite a quantidade de vendas do produto %d :",i+1);
    scanf("\n%d",&vendas[i]);
    printf("\ndigite o preco unitario do produto :");
    scanf("\n%d",&preco);
    vendas[i]=vendas[i]*preco;
    faturamento=faturamento+vendas[i];
  }
printf("\n______________________________\no faturamento final foi de ::R$ %d",faturamento);
}
