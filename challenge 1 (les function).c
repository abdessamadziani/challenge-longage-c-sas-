#include<stdio.h>
#include<stdlib.h>
int a,b;
int Somme(int a,int b)
{
    return a+b;
}

void main()
{
    printf("donner un nombre A: \n");
    scanf("%d",&a);
    printf("donner un nombre B: \n");
    scanf("%d",&b);
    Somme(a,b);
    printf("la somme est : %d",Somme(a,b));
}
