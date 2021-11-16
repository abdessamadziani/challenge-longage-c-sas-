#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i,nb,estPremier=0;
    printf("Veuillez donner un nombre :\n");
    scanf("%d",&nb);
    for(i=2;i<=nb/2;i++)
    {
        if(nb%i==0)
        {
            estPremier=1;
            break;
        }

    }
    if(estPremier==0)
        printf("Ce nombre est Premier .\n");
    else
        printf("Ce nombre est  Non Premier .\n");

}
