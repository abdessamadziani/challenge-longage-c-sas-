#include <stdio.h>
#include <stdlib.h>

void main()
{
    int nb,i;
    printf("donner un nombre : \n");
    scanf("%d",&nb);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",nb,i,nb*i);
    }
}
