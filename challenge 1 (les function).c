#include<stdio.h>
#include<stdlib.h>

int Somme(int a,int b)
{
    return a+b;
}
void main()
{
    int a,b;
    printf("Veuillez donner 1ere Valeur :\t");
    scanf("%d",&a);
        printf("Veuillez donner 2eme Valeur :\t");
    scanf("%d",&b);
    printf(" %d + %d = %d",a,b,Somme(a,b));

}
