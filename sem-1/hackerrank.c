#include <stdio.h>
    
int main()
{
    char arr[1000];

    for(int i=0;i!='\0';i++)
        scanf("%s",arr[i]);

    for(int j=0;j!='\0';j++)
       if(j==' ' || j=='\0')
            printf("\n");
        else
            printf("%s",arr[j]);
   
    return 0;
}