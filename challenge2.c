#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("Conversion du C en f \n");
    float f,c;
    printf("Veuillez entrer la temperature en Celsius  :\n");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("Resultat en Fahrenheit est : %.2f \n",f);

}
