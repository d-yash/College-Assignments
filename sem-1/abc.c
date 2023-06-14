#include<stdio.h>
#include<ctype.h>

int main()
{
    int i,j,a=97,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {   
            if(i%2==0)
            {
                printf("%c",toupper(a));
                a++;
            }
            else
            {
                printf("%c",a);
                a++;
            }
        }
        printf("\n");
    }
    return 0;
}