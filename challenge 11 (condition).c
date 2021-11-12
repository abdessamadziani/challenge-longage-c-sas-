#include <stdio.h>
#include <stdlib.h>
void main()
{
    int h1,m1,s1,h2,m2,s2,test1,test2;
    printf("Veuillez donner les heures: \n");
    scanf("%d",&h1);
     printf("Veuillez donner les minutes: \n");
    scanf("%d",&m1);
     printf("Veuillez donner les secondes: \n");
    scanf("%d",&s1);
    printf(" %d H / %d M/ %d S",h1,m1,s1);
    printf("\n\n\n");

      printf("Veuillez donner les heures: \n");
    scanf("%d",&h2);
     printf("Veuillez donner les minutes: \n");
    scanf("%d",&m2);
     printf("Veuillez donner les secondes: \n");
    scanf("%d",&s2);
    printf(" %d H / %d M/ %d S \n",h2,m2,s2);
    test1=h1*3600+m1*60+s1;
    test2=h2*3600+m2*60+s2;
    if(test1<test2)
    printf("Le premier instant vient avant le deuxieme");
    else if(test1>test2)
    printf("Le deuxième instant vient avant le premier");
    else
        printf("les deux instantes sont egaux");







}
