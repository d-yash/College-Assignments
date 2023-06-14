#include<stdio.h>

int main(int argc, char const *argv[])
{
    char lower,upper;

    printf("Enter the character = ");
    scanf("%c",&lower);

    upper=lower-32;

    printf("Character is = %c",upper);
    return 0;
}
