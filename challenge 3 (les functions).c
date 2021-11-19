#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool k=false;
bool isPremier(int n)
{
    int i,m=0;
    for(i=2;i<n;i++)
    {
       if(n%i==0)
       {
            k=true;
            break;
       }

    }
    return k;


}


void main()
{
    int nb;
    printf("Veuillez donner un nombre : \n");
    scanf("%d",&nb);

    printf("%d",isPremier(nb));
if(isPremier(nb)==1)
    printf("\nFalse (pas premier)");
else
    printf("\nTrue (premier)");



}
