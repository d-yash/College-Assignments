#include <stdio.h>
    
//To create a file INPUT and write and read in OUTPUT

int main()
{
    char c;
    FILE *fp;

    fp=fopen("INPUT.txt","a");
    printf("\nEnter Data....\n");
    while((c=getc(stdin))!=EOF)
        putc(c,fp);
    fclose(fp);
    fp=fopen("INPUT.txt","r");
    while((c=getc(fp))!=EOF)
        putc(c,stdout);
    fclose(fp);
    return 0;
}