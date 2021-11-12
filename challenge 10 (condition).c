#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
   srand(time(NULL));
   int nb= 1+rand()%7;
    switch(nb)
    {
    case 1:
        printf("lundi\n");
        break;

    case 2:
        printf("mardi\n");
        break;


    case 3:
        printf("mercredi\n");
        break;


    case 4:
        printf("jeudi\n");
        break;

    case 5:
        printf("vendredi\n");
        break;


    case 6:
        printf("samedi\n");
        break;


    case 7:
        printf("dimanche\n");
        break;




    }

}
