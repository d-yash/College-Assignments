#include<stdio.h>
struct stud
{
    char ans;
    char name[50];
}yash,shivani,tosha;

int main(int argc, char const *argv[])
{
    printf("\nEnter the name of the student : ");
    fflush(stdin);
    gets(yash.name);
    printf("\nkhbr padi ??? : ");
    scanf("%c",&yash.ans);

    printf("\nEnter the name of the student : ");
    fflush(stdin);
    gets(shivani.name);
    printf("\nkhbr padi ??? : ");
    scanf("%c",&shivani.ans);

    printf("\nEnter the name of the student : ");
    fflush(stdin);
    gets(tosha.name);
    printf("\nkhbr padi ??? : ");
    scanf("%c",&tosha.ans);


    printf("\nName : %s",yash.name);
    printf("\nAns : %c",yash.ans);
    
    printf("\nName : %s",shivani.name);
    printf("\nAns : %c",shivani.ans);
    
    printf("\nName : %s",tosha.name);
    printf("\nAns : %c",tosha.ans);
    return 0;
}
