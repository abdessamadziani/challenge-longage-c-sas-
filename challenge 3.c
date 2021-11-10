#include<stdio.h>
#include<stdlib.h>
void main()
{
    float  metre,mile;
    printf("Veuillez entrer  la distance en Metre : \n");
    scanf("%f",&metre);
    mile=(metre/1000)*1.609;
    printf("la transformation en Mile est %.2f",mile);
}
