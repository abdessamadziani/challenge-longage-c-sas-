#include <stdio.h>
#include <stdlib.h>
void main()
{
    float moyenne;
    menu:
    printf("Veuilez donner la moyenne: \n");
    scanf("%f",&moyenne);
    if(moyenne<10)
    printf("recale.\n");
    else if(moyenne<12)
    printf("passable\n");
    else if (moyenne<14)
        printf(" mention\n");
    else if (moyenne<16)
        printf(" mention bien\n");
    else if (moyenne<=20)
        printf(" tres bien\n");
    else
    {
        printf("vous douvez entrer un nombre entre 0 et 20\n");
        goto menu;
    }




}
