#include <stdio.h>
#include <stdlib.h>
void main()
{

printf("*************Nombre entier a trois chiffres en ordre inverse**************\n");
int nb,a,b,c;
printf("Veuillez Nombre entier a trois chiffres: \n ");
scanf("%d",&nb);
a=((nb%100)%10);
b=((nb%100)/10);
c=nb/100;
printf(" L'inverse de %d est : %d%d%d ",nb,a,b,c);





}
