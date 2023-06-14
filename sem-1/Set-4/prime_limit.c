#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,n,m,flag;

    printf("Enter the Limits : ");
    scanf("%d%d",&n,&m);

    while(n<m)
    {
        flag=0;
        if(n<=1)
        {
            n++;
            continue;
        }
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }

        if("flag==0")
            printf("%d",n);
        
        
    }
    return 0;
}
