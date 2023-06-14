#include<stdio.h>

int main(int argc, char const *argv[])
{
    int month;

    start:

    printf("\n\nEnter the Month : ");
    scanf("%d",&month);

    if(month>=1 && month<=12)
    {
        switch(month)
        {
            case 1: 
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("\n\n31 Days");
                break;
            case 2:
                printf("\n\n28/29 Days");
                break;
            default:
                printf("\n\n30 Days");          
        }
    }
    else
    {
        printf("\n\nEnter the month Properly");
        goto start;
    }
    
    return 0;
}
