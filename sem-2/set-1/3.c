#include <stdio.h>

//To create person structure having age and weight. Pointers with structure 

struct person
{
    int age;
    float weight;
} per[50];
int main()
{
    struct person *ptr;
    int n;
    ptr = &per;
    printf("\nEnter the number of people : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the age of the person : ");
        scanf("%d", &(ptr+i)->age);
        printf("\nEnter the weight of the person (in kg): ");
        scanf("%f", &(ptr+i)->weight);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", (ptr+i)->age);
        printf("\t%.2f kg", (ptr+i)->weight);           
    }
    return 0;
}