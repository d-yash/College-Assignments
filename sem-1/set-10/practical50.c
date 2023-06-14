#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    FILE *fp;
    fp = fopen("int.txt", "w");
    printf("\nEnter the integer...<-1 to EXIT>\n");

    do
    {
        scanf("%d", &a);
        putw(a, fp);
    } while (a != -1);
    fclose(fp);
    fp = fopen("int.txt", "r");
    while ((a = getw(fp)) != EOF)
        printf("%d\t", a);
    fclose(fp);

    return 0;
}
