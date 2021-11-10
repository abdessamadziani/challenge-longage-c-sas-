#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("*******affichage informations***********\n");
    char nom[20], prenom[20];
    int age,num;
    char sexe;
    printf("Veuillez donner le nom: \n");
    scanf("%s",&nom);
    printf("Veuillez donner le prenom: \n");
    scanf("%s",&prenom);
     printf("Veuillez donner age: \n");
    scanf("%d",&age);
      printf("Veuillez donner numero: \n");
    scanf("%d",&num);
     printf("Veuillez donner le sexe \n");
    scanf(" %c",&sexe);
    printf("le nom est %s\n le prenom est: %s\n L'age est :%d ans\n le numero est: %d\n le sexe est : %c\n",nom,prenom,age,num,sexe);



}
