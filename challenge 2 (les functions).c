#include<stdio.h>
#include<stdlib.h>
void Permitation(int *a,int *b)
{


    printf("\nApres la permitation: \n");
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;


}
void main()
{
    int a,b;
    printf("donner la valeur de A: \n");
    scanf("%d",&a);
    printf("donner la valeur de B: \n");
    scanf("%d",&b);
    printf("\nL'etat initial  : \n");
    printf("A= %d\n B= %d\n",a,b);
    Permitation(&a,&b);
    printf("A= %d\n B= %d\n",a,b);



}
