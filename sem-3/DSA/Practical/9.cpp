#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *rptr, *lptr;
};
class doubly_linkedlist
{
    struct Node *head, *tail;

public:
    doubly_linkedlist()
    {
        head = tail = NULL;
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
        if (head == NULL && tail == NULL)
        {
            x->data = value;
            x->rptr = x->lptr = NULL;

            head = tail = x;
        }
        else
        {
            x->data = value;
            x->lptr = NULL;
            x->rptr = head;

            head->lptr = x;
            head = x;
        }
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
        if (head == NULL && tail == NULL)
        {
            x->data = value;
            x->rptr = x->lptr = NULL;

            head = tail = x;
        }
        else
        {
            x->data = value;
            x->rptr = NULL;
            x->lptr = tail;

            tail->rptr = x;
            tail = x;
        }
    }
    void insertAtPos(int value, int pos)
    {
        Node *p;
        p = head;
        for (int i = 1; p != NULL && i < pos - 1; i++, p = p->rptr)
            ;
        if (p == NULL)
        {
            cout << "\nPosition not found!" << endl;
            return;
        }
        Node *x;
        x = new Node;
        x->data = value;
        x->lptr = x->rptr = NULL;

        x->lptr = p;
        x->rptr = p->rptr;

        p->rptr->lptr = x;
        p->rptr = x;
    }
    void deleteNode(int pos)
    {
        Node *p;
        p = head;
        for (int i = 1; i < pos && p != NULL; i++, p = p->rptr)
            ;
        if (p == NULL)
        {
            cout << "\nPosition not found!" << endl;
            return;
        }
        p->lptr->rptr = p->rptr;
        p->rptr->lptr = p->lptr;
    }
    void traverse()
    {
        Node *p;
        cout << "NULL-->\t";
        for (p = head; p != NULL; p = p->rptr)
        {
            cout << p->lptr << "|" << p->data << "|" << p->rptr << "\t<-->\t";
        }
        cout << "NULL" << endl;
    }
    int count()
    {
        Node *p;
        int i;
        for (i = 0, p=head; p != NULL; i++, p = p->rptr)
            ;
        return i;
    }
    int search(int value)
    {
        Node *p;
        int i;
        for (i = 1, p = head; p != NULL; i++, p = p->rptr)
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
        Node *oldhead, *oldtail;
        oldhead = head;
        oldtail = tail;
        while (oldtail != oldhead)
        {
            Node *temp = oldtail->rptr;
            oldtail->rptr = oldtail->lptr;
            oldtail->lptr = temp;
            oldtail = oldtail->rptr;
        }
        if (oldtail == oldhead)
        {
            Node *temp = oldtail->rptr;
            oldtail->rptr = oldtail->lptr;
            oldtail->lptr = temp;
        }
        head = tail;
        tail = oldhead;
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
    doubly_linkedlist doubly;
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
            doubly.insertFirst(value);
            break;
        case 2:
            system("CLS");
            cout << "Enter the value : ";
            cin >> value;
            doubly.insertLast(value);
            break;
        case 3:
            system("CLS");
            cout << "Enter the value : ";
            cin >> value;
            cout << "Enter the position : ";
            cin >> position;
            doubly.insertAtPos(value, position);
            break;
        case 4:
            system("CLS");
            cout << "Enter the position which you want to delete : ";
            cin >> position;
            doubly.deleteNode(position);
            break;
        case 5:
            system("CLS");
            cout << "Enter the value : ";
            cin >> value;
            cout << "Element found on the " << doubly.search(value) << " position." << endl;
            break;
        case 6:
            system("CLS");
            cout << "Reversed linked list is ... " << endl;
            doubly.reverse();
            doubly.traverse();
            break;
        case 7:
            system("CLS");
            cout << "Total Nodes in the linked list is : " << doubly.count() << endl;
            ;
            break;
        case 8:
            system("CLS");
            doubly.traverse();
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