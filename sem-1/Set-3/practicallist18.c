#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i=1,count;

    printf("\nEnter the value of Count : ");
    scanf("%d",&count);

    if(count<1)
    {
        goto end;
    }
    start:
    printf("%d\n",i);
    i++;
    if(i<=count)
    {
        goto start;
    }
    end:

    return 0;
}
