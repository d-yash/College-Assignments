// Write a menu driven program to perform the following operations on the QUEUE using an
// array. 1. Insert 2. Delete 3. Search 4. Change 5. Display the contents 6. Exit
#include <iostream>
#include<conio.h>
using namespace std;

class Queue
{
    int q[20];
    int front, rear, n = 0, value = 0;

public:
    Queue()
    {
        for (int i = 0; i < 20; i++)
            q[i] = 0;
        front = rear = -1;
    }
    void traverse()
    {
        if (rear == -1)
        {
            cout << "\nQueue is empty." << endl;
        }
        else
        {
            cout << endl
                 << endl
                 << "Queue is as following ... " << endl;
            for (int i = front; i <= rear; i++)
                cout << q[i] << "\t";
        }
    }
    void enQueue()
    {
        if (rear > 20)
        {
            cout << "\nQueue Overflow!" << endl;
            return;
        }
        if (front == -1)
            front = 0;
        rear++;
        cout << "Enter the Value of the Element : ";
        cin >> q[rear];
        cout << "\nElement added to Queue ... " << endl;
    }
    void deQueue()
    {
        if (rear == -1)
        {
            cout << "\nQueue Underflow!";
            cout << "Resetting the Queue ... ";
            front = rear = -1;
            return;
        }
        int temp = q[front];
        front++;
        cout << "\nElement valued " << temp << " has been deleted" << endl;
    }
    void search()
    {
        cout << "\nEnter the Value that you want to search : ";
        cin >> value;
        for (int i = front; i <= rear; i++)
        {
            if (value == q[i])
                cout << "\n"
                     << value << " is on the " << i + 1 << " position." << endl;
        }
    }
    void change()
    {
        int pos;
        cout << "\nEnter the value that you want to change : ";
        cin >> pos;
        for (int i = front; i <= rear; i++)
        {
            if (value == q[i])
            {
                cout << "\nEnter the new value : ";
                cin >> value;
                q[i] = value;
                cout << "\nValue has been changed." << endl;
                return;
            }
        }
        cout << "\nValue not found in the Queue!" << endl;
    }
};
int menu()
{
    int choice;
    system("CLS");
    cout << "\nEnter 1 to Insert the Element to the Queue." << endl;
    cout << "Enter 2 to Delete the Element from the Queue." << endl;
    cout << "Enter 3 to Search the Element in the Queue." << endl;
    cout << "Enter 4 to change the Elements of the Queue." << endl;
    cout << "Enter 5 to display the Queue." << endl;
    cout << "Enter 6 to Exit." << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    return choice;
}
int main()
{
    Queue q;
menu:
    switch (menu())
    {
    case 1:
    {
        q.enQueue();
        break;
    }
    case 2:
    {
        q.deQueue();
        break;
    }
    case 3:
    {
        q.search();
        break;
    }
    case 4:
    {
        q.change();
        break;
    }
    case 5:
    {
        q.traverse();
        break;
    }
    case 6:
    {
        goto end;
        cout<<"\n\n\nThank  you"<<endl;
        break;
    }
    default:
    {
        cout << "\nInvalid choice!!" << endl;
        cout << "\nEnter valid choice!!" << endl;
        break;
    }
    }
    getch();
    goto menu;
end:
    return 0;
}