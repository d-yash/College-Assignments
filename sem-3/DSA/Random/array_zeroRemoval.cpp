#include<iostream>
using namespace std;
    
int main()
{
    int n;
    cout<<"Howmany elements would you like to enter : ";
    cin>>n;
    int arr[50];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<i+1<<" element : ";
        cin>>arr[i];
    }
    system("CLS");
    cout<<"\nBefore removing all the zero from the Array ... "<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    int zero = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 0)
        {
            zero++;
            // cout<<"\narr "<<i<<":"<<arr[i]<<"\tarr "<<i+1<<":"<<arr[i+1];
            for(int j=i; j<n; j++)
                arr[j] = arr[j+1];
            i--;
        }
    }
    n = n - zero;
    cout<<"\nAfter removing all the zero from the Array ... "<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}