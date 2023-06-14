#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
class singly_linkedlist
{
    struct Node *head, *newhead;

public:
    singly_linkedlist()
    {
        head = newhead = NULL;
    }
    void insertFirst(int value)
    {
        Node *x;
        x = new Node;
        if (x == NULL)
        {
            cout << "\nNot sufficient Memory!" << endl;
            return;
        }
        x->data = value;
        x->next = NULL;

        x->next = head;
        head = x;
    }
    void insertLast(int value)
    {
        Node *x;
        x = new Node;
        if (x == NULL)
        {
            cout << "\nNot sufficient Memory!" << endl;
            return;
        }
        x->data = value;
        x->next = NULL;
        if (head == NULL)
        {
            head = x;
        }
        else
        {
            Node *p;
            for (p = head; p->next != NULL; p = p->next)
                ;
            p->next = x;
        }
    }
    void insertAtPos(int value, int pos)
    {
        Node *p;
        p = head;
        for (int i = 1; i < pos - 1 && p != NULL; p = p->next, i++)
            ;
        if (p == NULL)
        {
            cout << "\nPosition not found!" << endl;
            return;
        }
        Node *x;
        x = new Node;
        if (x == NULL)
        {
            cout << "\nNot sufficient Memory!" << endl;
            return;
        }
        x->data = value;
        x->next = NULL;

        x->next = p->next;
        p->next = x;
    }
    void traverse()
    {
        Node *p;
        if (head == NULL)
        {
            cout << "\nLinked list is empty!" << endl;
            return;
        }
        for (p = head; p != NULL; p = p->next)
        {
            cout << p->data << '\t';
        }
        cout << endl;
    }
    int deleteNode(int pos)
    {
        Node *p;
        p = head;
        if (pos <= 0)
        {
            cout << "\nInvalid position!" << endl;
            return -1;
        }
        else if (pos == 1)
        {
            if (head == NULL)
            {
                cout << "\nLinkedlist is empty!" << endl;
                return -1;
            }
            int temp = head->data;
            Node *x;
            x = head;
            head = head->next;
            delete x;
            return temp;
        }
        else
        {
            for (int i = 1; i < pos - 1 && p != NULL; p = p->next, i++)
                ;
            if (p == NULL)
            {
                cout << "\nPosition not found!" << endl;
                return -1;
            }
            int temp = p->next->data;
            Node *x;
            x = p->next;
            p->next = x->next;
            delete x;
            return temp;
        }
    }
    int count()
    {
        Node *p;
        p = head;
        int i;
        for (i = 0; p != NULL; p = p->next, i++)
            ;
        return i;
    }
    int search(int value)
    {
        Node *p;
        int i = 1;
        for (p = head; p != NULL; p = p->next, i++)
        {
            if (p->data == value)
            {
                return i;
            }
        }
        return -1;
    }
    void reverse()
    {
        newhead = NULL;
        if (head == NULL)
        {
            newhead = NULL;
            cout << "\nLinked list is empty!" << endl;
            return;
        }
        Node *p;
        while (head != NULL)
        {
            p = head;
            head = head->next;
            p->next = newhead;
            newhead = p;
        }
        head = newhead;
        p = NULL;
        delete p;
    }
};
int menu()
{
    int choice;
    cout << "\nEnter 1 to insert element at front." << endl;
    cout << "Enter 2 to insert element at last." << endl;
    cout << "Enter 3 to insert element at position." << endl;
    cout << "Enter 4 to delete the node." << endl;
    cout << "Enter 5 to search the element." << endl;
    cout << "Enter 6 to reverse the linked list." << endl;
    cout << "Enter 7 to count the nodes." << endl;
    cout << "Enter 8 to traverse." << endl;
    cout << "Enter 9 to exit." << endl;
    cout << "\nEnter your choice : ";
    cin >> choice;
    return choice;
}
int main()
{
    singly_linkedlist single;
    int value, position, temp;
    while (temp != 9)
    {
        temp = menu();
        switch (temp)
        {
        case 1:
            system("CLS");
            cout << "Enter the value : ";
            cin >> value;
            single.insertFirst(value);
            break;
        case 2:
            system("CLS");
            cout << "Enter the value : ";
            cin >> value;
            single.insertLast(value);
            break;
        case 3:
            system("CLS");
            cout << "Enter the value : ";
            cin >> value;
            cout<<"Enter the position : ";
            cin>>position;
            single.insertAtPos(value, position);
            break;
        case 4:
            system("CLS");
            cout<<"Enter the position which you want to delete : ";
            cin>>position;
            single.deleteNode(position);
            break;
        case 5:
            system("CLS");
            cout<<"Enter the value : ";
            cin>>value;
            cout<<"Element found on the "<<single.search(value)<<" position."<<endl;
            break;
        case 6:
            system("CLS");
            cout<<"Reversed linked list is ... "<<endl;
            single.reverse();
            single.traverse();
            break;
        case 7:
            system("CLS");
            cout<<"Total Nodes in the linked list is : "<<single.count()<<endl;;
            break;
        case 8:
            system("CLS");
            single.traverse();
            break;
        case 9:
            return 0;
        default:
            cout << "\nInvalid choice!" << endl;
            break;
        }
    }
    return 0;
}