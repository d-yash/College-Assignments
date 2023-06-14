#include<stdio.h>

int main(int argc, char const *argv[])
{
    char s[50],cs[50],i;

    printf("\nEnter Anything : ");
    scanf("%[^\n]s",s);

    for(i=0;s[i]!='\0';i++)
    {
        cs[i]=s[i];
    }
    cs[i]='\0';
    fflush(stdin);
    printf("\nEntered String is : %s",s);
    printf("\nCopied String is : %s",cs);
    return 0;
}
