#include<stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    FILE *inp,*out;

    inp=fopen("Input.txt","w");
    printf("Enter Data..\n");
    while ((c=getc(stdin)!=EOF))
    {
        putc(c,inp);
    }
    fclose(inp);
    out=fopen("Temp.txt","w");
    inp=fopen("Input.txt","r");
    while((c=getc(inp))!=EOF)
    {
        putc(c,out);
    }
    printf("\nFile copied");
    fclose(inp);
    fclose(out);
    out=fopen("Temp.txt","r");
    while((c=getc(out))!=EOF)
    {
        putc(c,stdout);
    }
    
    return 0;
}
