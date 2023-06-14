#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *inp=NULL,*out=NULL;
    char c;
    inp=fopen("Temp.txt","a");
    printf("Enter the Data..\n");
    while ((c=getc(stdin)!=EOF))
    {
        putc(c,inp);
    }
    fclose(inp);
    inp=fopen("Temp.txt","r");
    out=fopen("Input.txt","a");
    while ((c=getc(inp))!=EOF)
    {
        putc(c,out);
    }
    printf("\nCopied..");
    fclose(out);
    fclose(inp);
    out=fopen("Input.txt","r");
    while((c=getc(out))!=EOF)
        putc(c,stdout);
    return 0;
}
