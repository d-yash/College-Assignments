#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void printList(node *n)
{
    cout << "\n\nLinked List is as following ... " << endl;
    while (n != NULL)
    {
        cout << n->data << "\t";
        n = n->next;
    }
}

node *insertBeginning(node *head, int data)
{
    node *ptr = new node();
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

node *insertAtIndex(node *head, int data, int index)
{
    node *ptr = new node();
    node *p = head;
    int i=0;
    while(i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = p->next;
    return head;
}

node *insertAtEnd(node* head, int data)
{
    node *ptr = new node();
    node *p = head;
    ptr->data = data;
    while(p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

node *insertAfterIndex(node *head, node* prevNode, int data)
{
    node *ptr = new node();
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

int main()
{
    node *head;
    node *second;
    node *third;
    node *fourth;
    node *fifth;

    head = new node();
    second = new node();
    third = new node();
    fourth = new node();
    fifth = new node();

    head->data = 10;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 15;
    third->next = fourth;

    fourth->data = 21;
    fourth->next = fifth;

    fifth->data = 24;
    fifth->next = NULL;

    printList(head);

    //insert at the beginnig
    // head = insertBeginning(head, 30);
    // cout<<"\n\nAfter inserting the element at the beginning ... "<<endl;
    // printList(head);

    //insert at the index
    // head = insertAtIndex(head, 29, 2);
    // printList(head);

    // insert at the end
    // head = insertAtEnd(head, 31);
    // printList(head);

    // insert after the node
    head = insertAfterIndex(head, fourth, 16);
    printList(head);
    return 0;
}