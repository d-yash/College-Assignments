#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    FILE *fp;

    fp = fopen("Input.txt", "w");
    printf("\nEnter Data..\n");
    while ((c = getc(stdin)) != EOF)
    {                                               //ctrl z = ^z
        putc(c, fp);
    }
    fclose(fp);
    fp = fopen("Input.txt", "r");
    while ((c = getc(fp)) != EOF)
        putc(c, stdout);
    fclose(fp);
    return 0;
}
