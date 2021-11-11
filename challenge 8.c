#include <stdio.h>
#include <stdlib.h>

void main(){
float n1,n2,n3,n4,somme,moyenne;
printf("***********Moyenne et somme de 4 nombres****************\n");
printf("Veuillez donner 1eme nombre : \n");
scanf("%f",&n1);
printf("Veuillez donner 2eme nombre : \n");
scanf("%f",&n2);
printf("Veuillez donner 3eme nombre : \n");
scanf("%f",&n3);
printf("Veuillez donner 4eme nombre : \n");
scanf("%f",&n4);
somme=n1+n2+n3+n4;
moyenne=(n1+n2+n3+n4)/4;
printf("la somme est : %.2f\n\n\n la moyenne est : %.2f",somme,moyenne);

}
