#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("************Circonference d'un rectangle***************\n");
    float longueur,largeur,circonference ;
    printf("Veuillez donner longueur:\n ");
    scanf("%f",&longueur);
      printf("Veuillez donner longueur:\n ");
    scanf("%f",&largeur);
    circonference = 2*(longueur + largeur);
    printf("Circonference est : %.2f ",circonference);


}
