// Write a menu driven program to perform the following operations on the STACK using an array.
// 1. Push  2. Pop 3. Peep  4. Change 5. Peek 6. IsFull 7. IsEmpty 8. Traverse 9. Exit
#include <iostream>
using namespace std;

class Stack
{
    int arr[20];
    int top = -1;

public:
    Stack()
    {
        for (int i = 0; i < 20; i++)
            arr[i] = 0;
        top = -1;
    }
    void printStack()
    {
        if (top == -1)
            cout << "\n\nStack is empty!" << endl;
        else
        {
            cout << "\n\nStack is as following ...\n"
                 << endl;
            for (int i = top; i >= 0; i--)
                cout << arr[i] << "\t";
        }
    }
    void Push(int value)
    {
        if (top > 20)
            cout << "\n\tStack Overflow!" << endl;
        else
        {
            top++;
            arr[top] = value;
        }
        cout << "\t\tElement entered successfully.\n" << endl;
    }
    void Pop()
    {
        if (top < 0)
            cout << "\n\t\tStack Underflow!" << endl;
        else
        {
            system("CLS");
            cout << "\n\nPoped Element is " << arr[top] << endl;
            top--;
        }
    }
    void Peep()
    {
        cout << "\nTop most element is " << arr[top] << endl;
    }
    void Change(int index, int value)
    {
        arr[top - index] = value;
        cout << "\nValue has been changed." << endl;
        printStack();
    }
    int isFull()
    {
        if (top > 20)
            return 1;
        else
            return 0;
    }
    int isEmpty()
    {
        if (top < 0)
            return 1;
        else
            return 0;
    }
};
int menu()
{
    int choice;
    system("ClS");
    cout << "\n\nEnter 1 to do Push operation." << endl;
    cout << "Enter 2 to do Pop operation." << endl;
    cout << "Enter 3 to do Peep operaion." << endl;
    cout << "Enter 4 to do Change operaion." << endl;
    cout << "Enter 5 to Display the Stack." << endl;
    cout << "Enter 6 to Check Stack Overflow." << endl;
    cout << "Enter 7 to check Stack Underflow." << endl;
    cout << "Enter 8 to exit." << endl;
    cout << "\nEnter your choice : ";
    cin >> choice;
    return choice;
}
int main()
{
    Stack s;
menuTop:
    switch (menu())
    {
    case 1: //Push
    {
        int n;
        system("CLS");
        cout << "\nHow many elements you want to enter : ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int value;
            cout << "Enter the " << i + 1 << " value : ";
            cin >> value;
            s.Push(value);
        }
    }
    break;
    case 2: //Pop
    {
        system("CLS");
        s.Pop();
    }
    break;
    case 3: //Peep
    {
        system("CLS");
        s.Peep();
    }
    break;
    case 4: //Change
    {
        system("CLS");
        int index, value;
        cout << "\nEnter the index at which you want to change the value : ";
        cin >> index;
        cout << "\nEnter the new value : ";
        cin >> value;
        s.Change(index, value);
    }
    break;
    case 5: //print
    {
        system("CLS");
        s.printStack();
    }
    break;
    case 8: //exit
    {
        goto exit;
    }
    break;
    case 6:
    {
        cout << s.isFull();
        if (s.isFull())
            cout << "\n\nStack is Overflowing." << endl;
        else
            cout << "\n\nStack is not Overflowing" << endl;
    }
    break;
    case 7:
    {
        if (s.isEmpty())
            cout << "\n\nStack is Underflowing." << endl;
        else
            cout << "\n\nStack is not Underflowing" << endl;
    }
    break;
    default:
    {
        char yes;
        cout << "Invalid choice!!" << endl;
        cout << "\nEnter y/Y to continue : ";
        cin >> yes;
        if (yes == 'y' || yes == 'Y')
            goto menuTop;
    }
    break;
    }
    char again;
    cout << "\nWould You like to continue ??\nEnter y/Y to continue.\nEnter your choice : ";
    cin >> again;
    if (again == 'y' || again == 'Y')
        goto menuTop;
exit:
    return 0;
}


/*
PUSH(TOP, x)
1.[check for overflow]
    if TOP >= n
        then write("Stack overflow")
    return
2.[increment the TOP]
    TOP <-- TOP + 1
3.[insert the value at top]
    arr[TOP] <-- x
4.[finish]
    return

POP(TOP)
1.[check if underflow]
    if TOP >= 0
        then write('stack underflow')
    return(-1)
2.[fetch the value]
    Y <-- arr[TOP]
3.[decrement the TOP pointer]
    TOP <-- TOP - 1
4.[return the deleted value]
    return(Y)

PEEP(TOP)
1.[check for underflow]
    if TOP >= 0
        then write('stack underflow')
    return(-1)
2.[return the value at TOP]
    return(arr[TOP])
*/