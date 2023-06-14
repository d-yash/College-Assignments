#include <stdio.h>

int main(int argc, char const *argv[])
{
    int no;

    printf("Enter the Number : ");
    scanf("%d",&no);

    if(no%2==0)
        printf("\n%d is Even number",no);
    else
        printf("\n%d is Odd Number",no);
    
    return 0;
}
