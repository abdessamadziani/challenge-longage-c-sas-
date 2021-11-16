#include<stdio.h>
#include<stdlib.h>

void main()
{
    int nb,inverse=0;
    printf("Veuillez enter un nombre: \n");
    scanf("%d",&nb);
    while(nb!=0)
    {
        inverse=inverse*10;
        inverse=inverse+nb%10;
        nb=nb/10;
    }
    printf("l'inverse est : %d",inverse);
}
