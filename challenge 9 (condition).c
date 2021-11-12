#include <stdio.h>
#include <stdlib.h>
void main()
{
    int jour,mois,annee;
    printf("donner le jour : \n");
    scanf("%d",&jour);
    printf("donner le mois : \n");
    scanf("%d",&mois);
    printf("donner l'annee : \n");
    scanf("%d",&annee);
    switch(mois)
    {
    case 1:
        printf(" %d / JANVIER / %d",jour,annee);
        break;
    case 2:
        printf(" %d / FEVRIER / %d",jour,annee);
        break;
    case 3:
        printf(" %d / MARS / %d",jour,annee);
        break;
    case 4:
        printf(" %d / AVRIL / %d",jour,annee);
        break;
    case 5:
        printf(" %d / MAI / %d",jour,annee);
        break;
    case 6:
        printf(" %d / JUIN / %d",jour,annee);
        break;
    case 7:
        printf(" %d / JUILLET / %d",jour,annee);
        break;
    case 8:
        printf(" %d / AOUT / %d",jour,annee);
        break;
    case 9:
        printf(" %d / SEPTEMBRE / %d",jour,annee);
        break;
    case 10:
        printf(" %d / OCTOBRE / %d",jour,annee);
        break;
    case 11:
        printf(" %d / NOVEMBRE / %d",jour,annee);
        break;
    case 12:
        printf(" %d / DECEMBRE / %d",jour,annee);
        break;

    }

}
