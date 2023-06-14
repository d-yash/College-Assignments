#include<stdio.h>

int main()
{
    char s1[100],s2[100],i;
    
    printf("Enter s1 : ");
    scanf("%[^\n]s",s1);
    
    for(i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    printf("\nstring s1 : %s",s1);
    printf("\n\nstring s2 : %s",s2);
    return 0;
}