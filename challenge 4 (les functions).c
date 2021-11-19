#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
  bool y=false;
   int i,a,b,m=0;
int divededby(int a,int b)
{

    return a/b;
}

bool  dividedby()
{


    for(i=2;i<divededby(a,b);i++)
    {
       if(divededby(a,b)%i==0)
       {
          y=true;
           break;
       }

    }

    return y;


}





void main()
{

    printf("donner A: \n");
    scanf("%d",&a);
     printf("donner B: \n");
    scanf("%d",&b);
    dividedby();
    printf("la divition est : %d\n",divededby(a,b));
        dividedby();
    if(dividedby()==true)
        printf(" Non Premier\n");
    else
        printf(" Premier\n");



}
