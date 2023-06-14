#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

class cQueue
{
    int front = -1, rear = -1, value = 0, n;
    int cq[20];

public:
    cQueue() {}
    cQueue(int n)
    {
        this->n = n;
    }
    void enQueue()
    {
        if ((front == 0 && rear == n - 1) || (rear == front - 1))
            cout << "\nQueue Overflow!!" << endl;
        else
        {
            if (front == -1)
                front = 0;
            if (rear == n - 1)
                rear = 0;
            else
                rear++;
            cout << "\nEnter the value of the element : ";
            cin >> cq[rear];
            // cq[rear] = value;
            cout << endl
                 << cq[rear] << " is added" << endl;
        }
    }
    void traverse()
    {
        cout << "\nQueue is as following ... " << endl;
        if (front <= rear)
        {
            for (int i = front; i <= rear; i++)
                cout << cq[i] << "\t";
        }
        else
        {
            for (int i = front; i < n; i++)
                cout << cq[i] << "\t";
            for (int i = 0; i <= rear; i++)
                cout << cq[i] << "\t";
        }
    }
    void deQueue()
    {
        int temp;
        if (front == -1)
            cout << "Queue Underflow!" << endl;
        else
        {
            temp = cq[front];
            if (front == rear)
                front == rear == -1;
            else
            {
                if (front == n - 1)
                    front == 0;
                else
                    front++;
            }
        }
        cout << "\nElement valued " << temp << " has been deleted." << endl;
    }
    void search()
    {
        cout << "\nEnter the value which you want to find : ";
        cin >> value;
        int j = 0;
        if (front >= rear)
        {
            for (int i = front; i <= n; i++, j++)
            {
                if (cq[i] == value)
                {
                    cout << value << " is found at the " << j + 1 << " position" << endl;
                    exit(0);
                }
            }
            for (int i = 0; i <= rear; i++, j++)
            {
                if (cq[i] == value)
                {
                    cout << value << " is found on the " << j << " position" << endl;
                    break;
                }
            }
            cout<<"\nElement "<<value<<" not found in the Queue."<<endl;
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                if (cq[i] == value)
                {
                    cout << value << " is found on the " << i + 1 << " position" << endl;
                }
            }
            cout<<"\nElement "<<value<<" not found in the Queue."<<endl;
        }
    }
    void change()
    {
        int temp;
        cout << "\nEnter the value that you want to replace : ";
        cin >> temp;
        if (front >= rear)
        {
            for (int i = front; i <= n; i++)
            {
                if (cq[i] == temp)
                {
                    cout << "\nEnter the new value : ";
                    cin >> value;
                    cq[i] = value;
                    cout << "\nValue has been replaced ... " << endl;
                    break;
                }
            }
            for (int i = 0; i <= rear; i++)
            {
                if (cq[i] == temp)
                {
                    cout << "\nEnter the new value : ";
                    cin >> value;
                    cq[i] = value;
                    cout << "\nValue has been replaced ... " << endl;
                    break;
                }
            }
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                if (cq[i] == temp)
                {
                    cout << "\nEnter the new value : ";
                    cin >> value;
                    cq[i] = value;
                    cout << "\nValue has been replaced ... " << endl;
                    break;
                }
            }
        }
    }
};
int menu()
{
    system("CLS");
    int choice;
    cout << "\nChoose 1 to enter the element in the Circular Queue." << endl;
    cout << "Choose 2 to delete the element from the Circular Queue." << endl;
    cout << "Choose 3 to Search the element in the Circular Queue." << endl;
    cout << "Choose 4 to Change the element in the Circular Queue." << endl;
    cout << "Choose 5 to Print the Circular Queue." << endl;
    cout << "Choose 6 to Exit." << endl;
    cout << "\nEnter you choice : ";
    cin >> choice;
    return choice;
}
int main()
{
    int n;
    cout << "\nHowmany Space do you want in the Queue : ";
    cin >> n;
    cQueue c(n);
    int temp;
    while (temp != 6)
    {
        temp = menu();
        switch (temp)
        {
        case 1:
        {
            c.enQueue();
            getch();
            break;
        }
        case 2:
        {
            c.deQueue();
            getch();
            break;
        }
        case 3:
        {
            c.search();
            getch();
            break;
        }
        case 4:
        {
            c.change();
            getch();
            break;
        }
        case 5:
        {
            c.traverse();
            getch();
            break;
        }
        }
    }
    return 0;
}