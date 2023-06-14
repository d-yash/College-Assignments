#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char s1[20],s2[20]="Ldrp",des[20];
    int l;

    printf("Enter the name : ");
    scanf("%s",s1);
    l=strlen(s1);
    printf("\nLength of string : %d",l);

    if(strcmp(s1,s2)==0)
        printf("\nBoth are equal");
    else    
        printf("\nBoth are not equal");

    strcpy(des,s1);
    printf("\nCopied string is : %s",des);

    strcat(s1,s2);
    printf("\nConcatnation : %s",s1);

    printf("\nReversed string : %s",strrev(s1));
    return 0;
}
