#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    printf("Equation deuxieme degre");
    int a,b,c,delta;
    float x,x1,x2;
    printf("entrer a: \n");
    scanf("%d",&a);
    printf("entrer b: \n");
    scanf("%d",&b);
    printf("entrer c: \n");
    scanf("%d",&c);
    delta=pow(b,2)-(4*a*c);
    printf("\n delta = %d\n",delta);
    if(delta<0)
    {
        printf("il n'y a pas de solution.\n");
    }
    else if(delta==0)
    {
        x=-b/(2*a);
        printf("il y a une seule solution à l'équation : X=  %.2f\n",x);
    }
    else
    {
        x1= ((-b-sqrt(delta))/(2*a));
        x2= ((-b+sqrt(delta))/(2*a));
        printf(" X1= %.2f                   X2= %.2f",x1,x2);

    }


}
