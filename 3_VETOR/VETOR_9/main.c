#include <stdio.h>
#include <stdlib.h>
int main()
{
    int juiz[50],i,acimaMedia=0,abaixoMedia=0,melhorQuant=0,piorQuant=0,melhor=0,pior=0;
    float media,porcentagemAcima=0,porcentagemAbaixo=0;
    printf("juiz 1=");
    scanf("%d",juiz[0]);
    melhor=juiz[0];
    pior= juiz[0];
    for(i=1; i<50; i++)
    {
        printf("juiz %d=",i+1);
        scanf("%d",juiz[i]);
        media=media+juiz[i];
        if(melhor<juiz[i])
        {
            melhor=juiz[i];
            break;
        }
        if (pior>juiz[i])
        {
            pior=juiz[i];
            break;
        }
    }
    media=media/50;
    for(i=0; i<50; i++)
    {
        if (juiz[i]>media)
        {
            acimaMedia=acimaMedia+1;
        }
        if (juiz[i]<media)
        {
            abaixoMedia=abaixoMedia+1;
        }
        if (juiz[i]==melhor)
        {
            melhorQuant=melhorQuant+1;
        }
        if (juiz[i]==pior)
        {
            piorQuant=piorQuant+1;
        }
    }
    porcentagemAcima=(acimaMedia%50)*100;
    porcentagemAbaixo=(abaixoMedia%50)*100;

    printf("\n\na media do atetla e : %d\na melhor pontuacao foi %d\na pior foi %d\nindice acima da media %d\nindice abaixo da media %d%\n numero de juizes que artribuiram maior nota %d% e a pior nota %d ",media,melhor,pior,porcentagemAcima,porcentagemAbaixo,melhorQuant,piorQuant);
}
