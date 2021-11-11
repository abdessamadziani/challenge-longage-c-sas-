#include <stdio.h>
#include <stdlib.h>

void main()
{
       float x1,x2,y1,y2,mn;
    printf("***********Distance entre deux points**************\n");
    printf("Veuillez donner X1: \n");
    scanf("%f",&x1);
     printf("Veuillez donner Y1: \n");
    scanf("%f",&y1);

      printf("Veuillez donner X2: \n");
    scanf("%f",&x2);
     printf("Veuillez donner Y2: \n");
    scanf("%f",&y2);
    mn=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("la distance entre les deuc points est : %.2f",mn);
}
