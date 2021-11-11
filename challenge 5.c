#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("Conversion du F en C\n");
    float f,c;
    printf("Veuillez entrer la temperature en Fahrenheit :\n");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("Resultat en Celsius  est : %.2f C \n",c);

}
