#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf(" Calcule et affichage resultat en format decimal\n");
    int a,b;
    printf("donner un nombre entier :\n ");
    scanf("%d",&a);
    printf("donner un nombre entier :\n ");
    scanf("%d",&b);
    printf("la somme de %d + %d = %d\n",a,b,a+b);
    printf("la soustraction de %d - %d = %d\n",a,b,a-b);
    printf("la multiplication de %d x %d = %d\n",a,b,a*b);
    printf("la division de %d / %d = %.2f\n",a,b,(float)a/b);
    printf("le modulo de %d %% %d = %d\n",a,b,a%b);






}
