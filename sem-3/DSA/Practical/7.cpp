#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
class queue_linkedlist
{
    Node *front, *rear;

public:
    queue_linkedlist()
    {
        front = rear = NULL;
    }
    void enQueue(int value)
    {
        Node *x;
        x = new Node;
        x->data = value;
        x->next = NULL;
        if (rear == NULL)
        {
            front = rear = x;
        }
        else
        {
            rear->next = x;
            rear = x;
        }
    }
    int deQueue()
    {
        if (front == NULL)
        {
            cout << "\nLinked list is empty..." << endl;
        }
        int temp = front->data;
        Node *p;
        p = front;
        if (front == rear)
        {
            rear = front = NULL;
        }
        else
        {
            front = front->next;
        }
        delete p;
        return temp;
    }
    void traverse()
    {
        Node *p;
        for (p = front; p != NULL; p = p->next)
        {
            cout << p->data << "\t";
        }
        cout << endl;
    }
};
int main()
{
    queue_linkedlist ql;
    int choice, value;
    while (choice != 4)
    {
        cout << "\nEnter 1 to add the element." << endl;
        cout << "Enter 2 to delete the element." << endl;
        cout << "Enter 3 to traverse." << endl;
        cout << "Enter 4 to exit." << endl;
        cout << "\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            system("CLS");
            cout << "Enter the value : ";
            cin >> value;
            ql.enQueue(value);
            break;
        case 2:
            system("CLS");
            cout << ql.deQueue() << " has been deleted." << endl;
            break;
        case 3:
            system("CLS");
            ql.traverse();
            break;
        case 4:
            return 0;
            break;
        default:
            cout << "\nInvalid choice!" << endl;
            break;
        }
    }
    return 0;
}