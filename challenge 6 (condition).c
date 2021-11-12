#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("***********Palindrome***************\n");
char ch[40];
int check=0;
printf("donner un mot\n");
gets(ch);
int lg=strlen(ch);
for(int i=0;i<lg/2;i++)
{
    if(ch[i] != ch[lg-1-i])
    {
        check=1;
        break;
    }
}

if(check==0)
    printf("ce  Mot  est Palindrome ");
else
    printf("ce  Mot n'est pas  Palindrome ");

}

