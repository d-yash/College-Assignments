#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char name[20],fullname[30];

    printf("Enter your name : ");
    scanf("%s",name);

    printf("\nWelcome %s\n\n",name);
    printf("Enter your name with surname : ");
    fflush(stdin);
    gets(fullname);
    printf("\nWelcome ");
    printf("\nFullname : %s",fullname);
    return 0;
}
