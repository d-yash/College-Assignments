#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char s1[50],s2[50]="LDRP",cop[20];
    int l;

    printf("\nEnter the Name : ");
    scanf("%s",s1);
    l=strlen(s1);
    printf("\nLength of String is : %d",l);

    strcpy(cop,s1);
    printf("\nCopied String is : %s",cop);

    printf("\nConcatnation : %s",strcat(s1,s2));
    printf("\nReversed String : %s",strrev(s2));
    return 0;
}
