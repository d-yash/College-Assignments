#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Howmany elements would you like to enter : ";
    cin >> n;
    int arr[50];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element : ";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n; k++)
                {
                    arr[k] = arr[k+1];
                }
                n--;
                i--;
            }
        }
    }

    cout << "\nAfter removing the duplications ... " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}