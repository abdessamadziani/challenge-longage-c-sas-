#include<stdio.h>
#include<stdlib.h>
void main()
{
    int t[15],n,s=0,max=0;
    int i;
    printf("Veuillez donner le nombre des cases vous voulez reserver: \n");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {

        printf("donner nombre %d : ",i+1);
        scanf("%d",&t[i]);
        if(t[i]<100 && t[i]%10==0)
        {
       if(t[i]>max)
        max=t[i];
        s=s+t[i];
        }







    }
    printf("la somme est : %d \n",s);
    printf("le max est %d ",max);





}
