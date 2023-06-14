#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *ptr=NULL;
    char str[50] = "is IDIOT\n";

   // ptr = fopen("file.txt","r");
    //fscanf(ptr,"%s",str);
   
    ptr = fopen("file.txt","a");
    fprintf(ptr,"%s",str);
    return 0;
}