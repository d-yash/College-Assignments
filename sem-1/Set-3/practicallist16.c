#include<stdio.h>
#include<ctype.h>

int main(int argc, char const *argv[])
{
    char c;

    printf("\n\nEnter the character : ");
    scanf("%c",&c);

    switch(c)
    {
      case 'a':
      case 'i':
      case 'e':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        printf("\n%c is Vowel",c);
        break;
      default:
        printf("\n%c is Consonant",c);
    }     
    return 0;
}
