#include<stdio.h>
int count(char*);

int main(int argc, char const *argv[])
{
    int a;
    char name[50];
    printf("\nEnter the Name : ");
    fflush(stdin);
    gets(name);
    a=count(name);
    printf("\nString Length : %d",a);
    return 0;
}
int count(char *pa)
{
    int i,sum=0;

    for(i=0;*pa!='\0';i++)
    {
        sum++;
        pa++;
    }
    return sum;
}
