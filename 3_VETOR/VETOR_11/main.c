#include <stdio.h>
#include <stdlib.h>

int main()
{
    int termos[100],i;
    termos[0]=100;
    printf("%d",termos[0]);
    for (i=1;i<100;i++){
        termos[i]=termos[i-1]-10;
        printf(" %d",termos[i]);
    }
}
