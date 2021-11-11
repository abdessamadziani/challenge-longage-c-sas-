#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("Paire ou Impaire\n");
    int nb;
    printf("Veuillez donner un nombre:\n");
    scanf("%d",&nb);
    if(nb%2==0)
        printf("Le nombre %d est: Pair",nb);
    else
   printf("Le nombre %d est: ImPair",nb);

}
