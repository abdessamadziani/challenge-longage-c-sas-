#include<stdio.h>
#include<stdlib.h>
void main()
{
    float mile,metre;
    printf("Veuillez donner la distance en Mile: \n");
    scanf("%f",&mile);
    float km=mile/1.609;
    metre=km*1000;
    printf("la transforme en Metre est : %.2f",metre);
}
