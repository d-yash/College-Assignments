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
    void quickSort(int lb, int ub)
    {
        int i, j, temp, key;
        bool flag = true;
        if (lb < ub)
        {
            i = lb;
            j = ub+1;
            key = a[lb];
            while (flag == true)
            {
                i++;
                while (a[i] < key)
                {
                    i++;
                }
                j--;
                while (a[j] > key)
                {
                    j--;
                }
                if (i < j)
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
                else
                {
                    flag = false;
                }
            }
            temp = a[lb];
            a[lb] = a[j];
            a[j] = temp;
            quickSort(lb, j - 1);
            quickSort(j + 1, ub);
        }
    }
};
int main()
{
    Array a(10);
    a.getArray();
    system("CLS");
    a.quickSort(0, 9);
    a.printArray();
    return 0;
}