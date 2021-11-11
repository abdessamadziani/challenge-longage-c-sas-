#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n1,n2,somme;
    printf("Veuillez donner un nombre entier: \n");
    scanf("%d",&n1);
    printf("Veuillez donner un  autre nombre entier: \n");
    scanf("%d",&n2);
    if(n1!=n2)
    {
        somme=n1+n2;
        printf(" la somme est : %d",somme);
    }
    else
    {
                somme=n1+n2;

        printf(" la somme est : %d est les deux nombres sont identiques Alors le triple de cette somme est : %d",somme,somme*3);
    }



}
