#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;

    printf("Enter the character : ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("\n%c is a Alphabet", c);
    else if (c <= '9' && c >= '0')
        printf("\n%c is Number", c);
    else
        printf("\n%c is Special Character", c);

    return 0;
}
