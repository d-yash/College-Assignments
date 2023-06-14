#include<stdio.h>
void print1();
void print2();
int main(int argc, char const *argv[])
{
    print1();
    return 0;
}
void print1()
{
    printf("\nwithin print1");
    print2();
}
void print2()
{
    printf("\nwithin print2");
}

