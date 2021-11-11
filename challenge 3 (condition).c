#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("**********Permutation Sous Conditions**************\n");
    float a,b;
    printf("Veuillez donner un nombre: \n");
    scanf("%f",&a);
    printf("Veuillez donner un autre nombre: \n");
    scanf("%f",&b);
    if(a<b)
        printf("le nombre %.2f inferieur a %.2f\n",a,b);
    else if (a>b)
        printf("le nombre %.2f superieur a %.2f\n",a,b);
    else
    printf("les deux nombres sont egales");


}
