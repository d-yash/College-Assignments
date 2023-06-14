#include <iostream>
using namespace std;

class Array
{
    int arr[20];
    int n;

public:
    void setArray()
    {
        cout << "Howmany elements you want to enter : ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the " << i + 1 << " element : ";
            cin >> arr[i];
        }
    }
    void traverse()
    {
        cout << "\nArray is as following ... \n" << endl;
        for (int i = 0; i < n; i++)
            cout << arr[i] << "\t";
    }
    int linearSearch(int key)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i] == key)
            {
                return i;
            }
        }
        return -1;
    }
    int binarySearch(int key, int low, int high)
    {
        bubbleSort();
        int mid;
        while(low <= high)
        {
            mid = (high + low)/2;
            if(key < arr[mid])
            {
                high = mid - 1;
            }
            else if(key > arr[mid])
            {
                low = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        cout<<"\nElement not found!"<<endl;
        return -1;
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
            }
        }
};

int main()
{
    Array a;
    a.setArray();
    // a.bubbleSort();
    cout<<"\nElement found on "<<a.linearSearch(12)+1<<" position"<<endl;
    cout<<"\nElement found on "<<a.binarySearch(12, 0, 4)+1<<" position"<<endl;
    a.traverse();
}