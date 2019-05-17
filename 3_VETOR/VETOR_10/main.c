#include <stdio.h>
#include <stdlib.h>
int main()
{
    double termosPg[20];
    int i;
    termosPg[0]=3;
    printf("%.0lf ",termosPg[0]);
    for(i=1; i<20; i++)
    {
        termosPg[i]=termosPg[i-1]*5;
        printf(" %.0lf ",termosPg[i]);
    }
}
