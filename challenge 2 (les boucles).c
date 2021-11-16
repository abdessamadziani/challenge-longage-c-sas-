#include<stdio.h>
#include<stdlib.h>


void main()
{
    int i,j,k,nb,f;
    printf("Veuillez donner nombre des lignes:\n");
    scanf("%d",&nb);

    for(i=1;i<=nb;i++)
    {
        for(k=nb-i;k>=1;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i+i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

  /*

    for(f=2;f<=nb/2;f++)
    {
        if(nb%f!=0)
        printf("%d ",f);
    }
      */


}
