#include<stdio.h>
void prime();
int main(int argc, char const *argv[])
{
    prime();
    return 0;
}
void prime()
{
    int i,n,flag=0;

    printf("\nEnter the number : ");
    scanf("%d",&n);

    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("\n%d is a prime number",n);
    else
        printf("\n%d is not a prime number",n);

}
