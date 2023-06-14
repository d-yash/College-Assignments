#include <iostream>
using namespace std;

class Array
{
    int a[20], n;

public:
    Array()
    {
        n = 10;
    }
    Array(int n)
    {
        this->n = n;
    }
    void getArray()
    {
        cout << "\nEnter all the elements of the Array." << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    void printArray()
    {
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << "  ";
        }
        cout << endl;
    }
    void mergeSort(int first, int second, int third)
    {
        int i, j, k, l;
        int b[20];
        i = first;
        j = second;
        k = l = 0;
        while(i<second && j<=third)
        {
            if(a[i] < a[j])
            {
                b[l] = a[i];
                l++; 
                i++;
            }
            else
            {
                b[l] = a[j];
                l++;
                j++;
            }
        }
        if(i == second)
        {
            while(i<second)
            {
                b[l] = a[i];
                l++;
                j++;
            }
        }
        else
        {
            while(i<second)
            {
                b[l] = a[i];
                l++;
                i++;
            }
        }
        for(k=0; k<l; k++)
        {
            a[first+k] = b[k];
        }
    }
    void twoWayMerge(int start, int finish)
    {
        int size = (finish-start+1);
        if(size <= 1)
        {
            return;
        }
        int mid = (start + finish)/2;
        twoWayMerge(start, mid);
        twoWayMerge(mid+1, finish);
        mergeSort(start, mid+1, finish);
    }
};
int main()
{
    Array a(10);
    a.getArray();
    a.twoWayMerge(0, 9);
    a.printArray();
    return 0;   
}