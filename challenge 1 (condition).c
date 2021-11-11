#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("************Affichage Temperature*************\n");
    float f,c;
    printf("Veuillez donner la temperature en Fahrenheit : \n");
    scanf("%f",&f);
     c=(f-32)/1.8;
     printf(" la transforme de %.2f  en degre Celsius est %.2f\n",f,c);
     if(c<20)
    printf("froid");
     else if(c<0)
    printf(" Tres froid");
    else if(c>20)
    printf(" chaud");
    else if(c>40)
    printf("Tres chaud");
    else
        printf("Erreur de saisie");





}
