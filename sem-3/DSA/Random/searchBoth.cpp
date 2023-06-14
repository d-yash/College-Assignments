#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    
    while (low <= high)
    {
        int mid = (low + high)/2;
        if(arr[mid] == element)
        {
            return mid;
        }
        if(arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;   
        }
    }
    return -1;    
}
int main()
{
    int n;
    cout<<"\nHowmany elements you want to enter : ";
    cin>>n;         
    int *arr = new int[n];  
    int element;
    cout<<"\nEnter all the elements of the Array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nWhich element you want to find : ";
    cin>>element;
    int searchElement = binarySearch(arr, n, element);   
    if(searchElement == -1)
        cout<<"\n\t\tElement not found in the Array"<<endl;
    else
        cout<<"\n\t\t"<<element<<" is found on the index : "<<searchElement<<endl;
    
    // delete[] arr;    
    return 0;
}