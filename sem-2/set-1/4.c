#include <stdio.h>

//To swap 2 values of a variable using pointer

int main()
{
    int a, b;
    int *pointerA, *pointerB, *pointerTemp;

    printf("\nEnter any two number : ");
    scanf("%d%d", &a, &b);
    pointerA = &a;
    pointerB = &b;

    printf("\n....Old values are....");
    printf("\n%d", *pointerA);
    printf("\t%d", *pointerB);

    pointerTemp = pointerA;
    pointerA = pointerB;
    pointerB = pointerTemp;

    printf("\n....Swapped values are....");
    printf("\n%d", *pointerA);
    printf("\t%d", *pointerB);
    return 0;
}