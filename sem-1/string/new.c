#include<stdio.h>

int main(int argc, char const *argv[])
{
    char s[100];
    int i;

    printf("\nEnter the words : ");
    gets(s);

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-32;
    }
    printf("\nUpper case : %s",s);
    return 0;
}
