#include <iostream>
using namespace std;

class deQueue
{
    int dq[20];
    int front, rear, n = 0, value = 0;

public:
    deQueue()
    {
        for (int i = 0; i < 20; i++)
            dq[i] = 0;
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
                cout << dq[i] << "\t";
        }
    }
    void enQueue_rear()
    {
        // int total;
        // cout << "\nHow many Elements would you like to enter : ";
        // cin >> n;
        // // n += total;
        if (n > 20)
        {
            cout << "\nStack is Overflowing!!" << endl;
        }
        else
        {
            if (rear > n)
            {
                cout << "\nQueue Overflow!";
                cout << "\nResetting the Queue ... " << endl;
                rear = front = -1;
            }
            if (front == -1)
                front = 0;
            rear++;
            // cout << "Enter the Value of the Element : ";
            // cin >> dq[rear];
            cout << "\nElements added to Queue ... " << endl;
        }
    }
    void enQueue_front()
    {
        if (front == 0)
            cout << "\nNo Empty space available at front." << endl;
        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            front--;
        }
        cout << "\nEnter the value : ";
        cin >> value;
        dq[front] = value;
    }
    void deQueue_rear()
    {
        if (rear == -1)
        {
            cout << "\nQueue is Empty!!" << endl;
            return;
        }
        int temp = dq[rear];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            rear--;
        }
        cout << "\nElement valued " << temp << " has been deleted" << endl;
        // n--;
    }
    void deQueue_front()
    {
        if (rear == -1)
        {
            cout << "\nQueue Underflow!";
            return;
        }
        int temp = dq[front];
        // for (int i = front; i < n; i++)
        // {
        //     dq[i] = dq[i + 1];
        // }
        // n--;
        front++;
        ;
        cout << "\nElement valued " << temp << " has been deleted" << endl;
    }
    void search()
    {
        cout << "\nEnter the Value that you want to search : ";
        cin >> value;
        for (int i = front; i <= rear; i++)
        {
            if (value == dq[i])
                cout << "\n"
                     << value << " is on the " << i + 1 << " position." << endl;
        }
    }
    void change()
    {
        int pos;
        cout << "\nAt which position would you like to change the Value : ";
        cin >> pos;
        cout << "\nEnter the new Value : ";
        cin >> value;
        int temp = dq[pos - 1];
        dq[pos - 1] = value;
        cout << "\nValue has been changed." << endl;
    }
};
int main()
{

    return 0;
}