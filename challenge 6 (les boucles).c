#include<stdio.h>
#include<stdlib.h>
 void main()
 {
     int i,n,t[20];
     printf("Veuillez combien de nombres vous voulez :\n");
     scanf("%d",&n);
     for(i=2;i<=n;i++)
     {
         if(n%i!=0)
            t[i]=i;

     }
          for(i=2;i<=n;i++)
          {
              printf("%d |",t[i]);
          }




 }
