#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,n,a[100],j,temp,ans;

    printf("\nPress 1 for Ascending Order\nPress 0 for Descending Order");
    printf("\nWhat is your choice : ");
    scanf("%d",&ans);

    switch(ans)
    {
        case 1:
        {    
            printf("\n\nEnter the value of n : ");
            scanf("%d",&n);

            printf("\nEnter the Elements of Array : ");
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            
            printf("\nAscending Order is as below ..............");
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(a[i]>a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
                printf("\na[%d] : %d",i,a[i]);
            }    
            break; 
        }
        case 0:
        {
            printf("\n\nEnter the value of n : ");
            scanf("%d",&n);

            for(i=0;i<n;i++)
                scanf("%d",&a[i]);
            printf("\nDescending Order is as below ..............");
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(a[i]<a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
                printf("\na[%d] : %d",i,a[i]);
            }
            break;
        }
        default:
            printf("\n\nEnter the choice Properly !");
    }
    return 0;
}
