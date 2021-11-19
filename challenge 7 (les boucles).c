#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Un,U0=1,U1=1,i,n;
    printf("ce programme vous permet de calculer la neme valeur de Un :\n");
    do{
            printf("Veuiller donner un nombre positif:\t");
            scanf("%d",&n);
    }while(n<0);
    if(n==1 || n==0)
        printf("U(%d) = 1\n",n);
    else
    {
        for(i=2;i<=n;i++)
        {
            Un=U0+U1;
            U0=U1;
            U1=Un;

        }
          printf("la veleur de U(%d)= %d",n,Un);

    }



    return 0;
}
