#include<iostream>
using namespace std;

//WAP to find the maximum number from Array by using member function having Array
class first
{
    int arr[100];
    int max=0,n;
    public:
        void getData()
        {
            cout<<"How many elements you want to enter : ";
            cin>>n;
            for(int i=0; i<n; i++)
            {   
                cout<<"Enter "<<i+1<<" number : ";
                cin>>arr[i];
            }
        }
        void maximum()
        {
            for(int i=0; i<n; i++)
            {
                if(max<arr[i])
                    max=arr[i];
            }
            printData();
        }
        void printData()
        {
            cout<<"\nMaximum Number from Array is : "<<max<<endl;
        }
};    
int main()
{
    first m;
    m.getData();
    m.maximum();
    return 0;
}