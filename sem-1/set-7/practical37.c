#include<stdio.h>

int main(int argc, char const *argv[])
{
    char s1[50],s2[50];
    int i;

    printf("\nEnter the First String : ");
    scanf("%s",s1);

    printf("\nEnter the Second String : ");
    scanf("%s",s2);

    for(i=0;s1[i]==s2[i] && s1[i]!='\0';i++);

    if(s1[i]>s2[i])
        printf("\nS1 String is Bigger");
    else if(s1[i]<s2[i])
        printf("\nS2 String is Bigger");
    else    
        printf("\nS1 and S2 are Equal");
    return 0;
}
