#include<stdio.h>
void value(int , int);
void ref(int* , int*);

int main(int argc, char const *argv[])
{
    int a,b;

    printf("\nEnter the value of A : ");
    scanf("%d",&a);
    printf("Enter the value of B : ");
    scanf("%d",&b);

    printf("\nSwaping by value method...\nValue of A:%d\nValue of B:%d",a,b);
    value(a,b);
    
    
    ref(&a,&b);
    printf("\nSwaping by reference method...\nValue of A:%d\nValue of B:%d",a,b);
    return 0;
}
void value(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("\nValues of A & B after calling value function...\nValue of A:%d\nValue of B:%d",a,b);

}
void ref(int *pa,int *pb)
{
    int c;
    c=*pa;
    *pa=*pb;
    *pb=c;
}