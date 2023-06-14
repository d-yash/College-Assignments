#include<stdio.h>

int main(int argc, char const *argv[])
{
    int r1,r2,n,i,flag=0;

    printf("Enter the range : ");
    scanf("%d%d",&r1,&r2);

    for(n=r1;n<=r2;n++)
    {
        flag=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
            
        }
        
        if(flag==0)
           printf("%d ",n);

    }


    return 0;
}
