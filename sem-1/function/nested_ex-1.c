#include<stdio.h>
void print1(char c);
int main(int argc, char const *argv[])
{
    print1('+');
    printf("\nName of clg : LDRP");
    print1('-');
    return 0;
}
void print1(char c)
{
    int i;
    printf("\n");
    for(i=0;i<20;i++)
        printf("%c",c);
}