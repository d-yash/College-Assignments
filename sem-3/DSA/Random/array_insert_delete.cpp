#include <iostream>
using namespace std;

int main()
{
againN:
    int n;
    int arr[20];
    system("CLS");
    cout << "\nHowmany elements would you like to enter : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element : ";
        cin >> arr[i];
    }
    int pos, num;
    int choice;
    system("CLS");
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
againY:
    cout << "\n\n\nPress 1 to insert the Number in the Array"
         << "\nPress 2 to delete the Number from the Array"
         << "\nPress 3 to find the Maximum Number from the Array"
         << "\nPress 4 to find the Minimum Number from the Array";
    cout << "\nEnter your choice : ";
    cin >> choice;
top:
    switch (choice)
    {
    case 1: //insertion
    {
        cout << "\n\nAt which index position you want to insert the number : ";
        cin >> pos;
        if (pos > n || pos < 1)
        {
            system("CLS");
            cout << "\nInvalid input!!\nEnter valid input.";
            goto top;
        }
        else
        {
            cout << "\nWhich Number you want to insert : ";
            cin >> num;
            for (int i = n - 1; i >= pos - 1; i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[pos - 1] = num;
            n++;
            system("CLS");
            cout << "\nInsertion completed successfully" << endl;
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
        }
    }
    break;
    case 2: //deletation
    {
        cout << "\n\nAt which position's Number Do you want to delete : ";
        cin >> pos;
        if (pos > n || pos < 1)
        {
            system("CLS");
            cout << "\nInvalid input!!\nEnter valid input.";
            goto top;
        }
        else
        {
            for (int i = pos; i < n; i++)
            {
                arr[i - 1] = arr[i];
            }
            n--;
            system("CLS");
            cout << "\nDeletation completed successfully" << endl;
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
        }
    }
    break;
    case 3: //maximum
    {
        int max = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        system("CLS");
        cout << "\nMaximum Number in the Array is : " << max << endl;
    }
    break;
    case 4: //minimum
    {
        int min = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < min)
                min = arr[i];
        }
        system("ClS");
        cout << "\nMinimum Number in the Array is : " << min << endl;
    }
    break;
    case 5:
    {
        int c;
        cout << "\nHow many elements you want to add : ";
        cin >> c;
        int temp = n;
        n += c;
        for (int i = temp; i < n; i++)
        {
            cout << "Enter the " << i + 1 << " element : ";
            cin >> arr[i];
        }
    }
    default:
        break;
    }
    char restart;
    cout << "\n\nPress (y/Y) to continue.\nPress (n/N) to exit" << endl;
    cout << "\nEnter your choice : ";
    cin >> restart;
    if (restart == 'y' || restart == 'Y')
    {
        char restart2;
        system("CLS");
        cout << endl;
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\n\nDo want to work with the same Array (y/n) ??";
        cin >> restart2;
        if (restart2 == 'y' || restart2 == 'Y')
            goto againY;
        else
            goto againN;
    }
    return 0;
}