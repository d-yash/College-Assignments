#include<stdio.h>
#include<string.h>


int main(int argc, char const *argv[])
{
    int l;
    char name[20];

    printf("Enter your Name : ");
    scanf("%s",name);
    l=strlen(name);
    printf("\nLength of string : %d",l);
    return 0;
}
