// Write a menu-driven program to perform the following operations on a one-dimensional array.
// 1. Set Array 2. Traverse 3. Insert at given Position 4. Delete from given position.
// 5. Shift Left 6. Shift Right 7. Rotate Left 8. Rotate Right 9. Reverse
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
    void insertAtIndex()
    {
        int pos, value;
    top:
        cout << "\n\nAt which index position you want to insert the number : ";
        cin >> pos;
        if (pos > n | pos < 1)
        {
            system("CLS");
            cout << "\nInvalid input!!\nEnter valid input.";
            goto top;
        }
        else
        {
            cout << "\nWhich Number you want to insert : ";
            cin >> value;
            for (int i = n - 1; i >= pos - 1; i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[pos - 1] = value;
            n++;
            system("CLS");
            cout << "\nInsertion completed successfully" << endl;
            traverse();            
        }
    }
    void deleteAtIndex()
    {
        int pos;
        top:
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
            traverse();
        }
    }
    void shiftRight()
    {
        for(int i=n-1; i>=0; i--)
            arr[i] = arr[i-1];
        arr[0] = 0;
        cout<<"\nOperation to perform Right shift completed."<<endl;
        traverse();
    }
    void shiftLeft()
    {
        for(int i=0; i<n; i++)
            arr[i-1] = arr[i];
        arr[n-1] = 0;
        cout<<"\nOperation to perform Left shift completed."<<endl;
        traverse();
    }
    void rotateRight()
    {
        int temp = arr[n-1];
        for(int i=n-1; i>=0; i--)
            arr[i] = arr[i-1];
        arr[0] = temp;
        cout<<"\nOperation to perform Right rotation completed."<<endl;
        traverse();
    }
    void rotateLeft()
    {
        int temp = arr[0];
        for(int i=0; i<n; i++)
            arr[i] = arr[i+1];
        arr[n-1] = temp;
        cout<<"\nOperation to perform Left rotation completed."<<endl;
        traverse();
    }
    void reverse()
    {
        int temp[20];
        for(int i=0; i<n; i++)
            temp[i] = arr[i];
        traverse();
        for(int i=0,j=n-1; i<n, j>=0; i++,j--)
        {
            arr[j] = temp[i];    
        }
        cout<<"\nOperation to reverse the Array is completed."<<endl;
        traverse();
    }
};
int menu()
{
    system("CLS");
    cout<<"Enter 1 to set the Array."<<endl;
    cout<<"Enter 2 to Traverse the Array."<<endl;
    cout<<"Enter 3 to Insert the Value at the Index."<<endl;
    cout<<"Enter 4 to Delete the Value at the Index."<<endl;
    cout<<"Enter 5 to Shift Right the Array."<<endl;
    cout<<"Enter 6 to Shift Left the Array."<<endl;
    cout<<"Enter 7 to Rotate the Array to Right."<<endl;
    cout<<"Enter 8 to Rotate the Array to Left."<<endl;
    cout<<"Enter 9 to reverse the Array"<<endl;
    int choice;
    cout<<"\nEnter Your choice : ";
    cin>>choice;
    return choice;
}
int main()
{
    Array a;
    menu:
    switch (menu())
    {
    case 1:
        {   
            system("CLS");
            a.setArray();
            cout<<"\nArray has been set successfully."<<endl;
        }
        break;
    case 2:
        {
            system("CLS");
            a.traverse();
        }
        break;
    case 3:
        {
            system("CLS");
            a.insertAtIndex();
        }
        break;
    case 4:
        {
            system("CLS");
            a.deleteAtIndex();
        }
        break;
    case 5:
        {
            system("CLS");
            a.shiftRight();
        }
        break;
    case 6:
        {
            system("CLS");
            a.shiftLeft();
        }
        break;
    case 7:
        {
            system("CLS");
            a.rotateRight();
        }
        break;
    case 8:
        {
            system("CLS");
            a.rotateLeft();
        }
        break;
    case 9:
        {
            system("CLS");
            a.reverse();
        }
        break;   
    default:
        {
            system("CLS");
            cout<<"\n\nInvalid Choice!!\nPlease Choose correct option."<<endl;
            goto menu;
        }
        break;
    }
    char again;
    cout<<"\n\nEnter y/Y to continue : ";
    cin>>again;
    if(again == 'y' | again == 'Y')
        goto menu;
    return 0;
}