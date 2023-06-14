#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    char s[100];

    printf("\nEnter Aynthing : ");
    scanf("%s",s);

    for(i=0;s[i]!='\0';i++);

    printf("\nLength of String : %d",i);
    return 0;
}
