#include<iostream>
using namespace std;

class array
{
    int arr[20];
    int n;
    public:
        array(){n=20;}
        array(int n){this->n = n;}
        void setArray()
        {
            cout<<"\nEnter the all elements of Array."<<endl;
            for(int i=0; i<n; i++)
                cin>>arr[i];
        }
        void printArray()
        {
            for(int i=0; i<n; i++)
                cout<<arr[i]<<"\t";
            cout<<endl;
        }
        void bubbleSort()
        {
            bool sort;
            for(int pass=1; pass<=n-1; pass++)
            {
                sort = true;
                for(int i=0; i<n-pass; i++)
                {
                    if(arr[i] > arr[i+1])
                    {
                        int temp = arr[i];
                        arr[i] = arr[i+1];
                        arr[i+1] = temp;
                        sort = false;
                    }
                }
                if(sort == true)
                {
                    break;
                }
                printArray();
            }
        }
};
int main()
{
    array a1(5);
    a1.setArray();
    a1.bubbleSort();
    a1.printArray();
    return 0;
}