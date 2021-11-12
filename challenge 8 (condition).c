#include <stdio.h>
#include <stdlib.h>
void main()
{
    char c;
    printf("Veuillez donner un caracter: \n");
    scanf("%c",&c);
    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        if(c>='a' && c<='z')
            printf("ce caracter est un alphabet, et minuscule \n");
        else
            printf("ce caracter est un alphabet, et majuscule. \n");
    }
    else
      printf(" ce caracter n'est pas un alphabet \n");


}
