#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    float ax,ay,bx,by,px,py,dist1,dist2,dist;
    printf("Veuillez entrer Ax et Ay :");
    scanf("%f %f",&ax,&ay);
      printf("Veuillez entrer Bx et By :");
    scanf("%f %f",&bx,&by);

    printf("Veuillez donner le point p(x,y):\n");
    printf("Px et Py:");
    scanf("%f %f",&px,&py);
    dist1= sqrt((px-ax)*(px-ax)+(py-ay)*(py-ay));
    dist2= sqrt((px-bx)*(px-bx)+(py-by)*(py-by));
    dist= sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
    if(dist==dist1+dist2)
        printf("Le point est sur le segment.\n");
    else
         printf("Le point n'est pas sur le segment.\n");


}
