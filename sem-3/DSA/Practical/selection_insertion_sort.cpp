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
        void selectionSort()    
        {
            int min_index, temp;
            for(int i=0; i<n-1; i++)
            {
                min_index = i;
                for (int j = i+1; j < n; j++)
                {
                    if(arr[j] < arr[min_index])
                        min_index = j;
                }   
                if(min_index!=i)
                {
                    temp = arr[min_index];
                    arr[min_index] = arr[i];
                    arr[i] = temp;
                }                
                printArray();
            }
        }
        void insertionSort()
        {
            int key, i, j;
            for(i=1; i<n; i++)
            {
                key = arr[i];
                for(j=i-1; arr[j]>key && j>=0; j--)
                {
                    arr[j+1] = arr[j];
                }
                arr[j+1] = key;
                printArray();
            }
        }
};
int main()
{
    array a1(5);
    a1.setArray();
    a1.insertionSort();
    // a1.selectionSort();
    a1.printArray();
    return 0;
}