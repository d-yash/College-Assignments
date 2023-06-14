#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp=NULL;
    int a[50],n,i;

    printf("\nHowmany Elements you want to enter : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the Number : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            fp=fopen("even.txt","a");
            fprintf(fp,"%d\t",a[i]);
            fclose(fp);
        }
        else
        {
            fp=fopen("odd.txt","a");
            fprintf(fp,"%d\t",a[i]);
            fclose(fp);
        }
    }
    return 0;
}
