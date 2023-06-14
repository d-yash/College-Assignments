#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n,temp,rem,sqr,flag=0,count=0;
    
    printf("Enter the no : ");
    scanf("%d",&n);

    temp=n;
    sqr=n*n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    rem=pow(10,count);
    n=temp;
    if(n==(sqr%rem))
    {
        flag=1;
    }

    if(flag==1)
       printf("\n%d is Automorphic Number",temp);
    else
       printf("\n%d is not Automorphic Number",temp);
    
    return 0;
}
