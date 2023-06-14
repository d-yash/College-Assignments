#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float n,root;

    do
    {
        printf("\n\nEnter the Number : ");
        scanf("%f",&n);

        root=sqrt(n);
        if(n>0)
            printf("Root is possible.\nRoot of %f is %f",n,root);
        else
            printf("\nRoot of %f is not possible",n);
    } while (n!=0);
    
    return 0;
}
