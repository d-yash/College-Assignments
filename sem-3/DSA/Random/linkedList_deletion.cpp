#include <iostream>
using namespace std;

class node
{
    public:
    node *next;
    int data;
};

node *deleteFirst(node *head)
{
    node* p = head;
    head = head->next;
    free(p);
    return head; 
}

node* deleteAtIndex(node* head, int index)
{
    node* p = head;
    node* ptr = new node();
    int i = 0;
    while(i == index-1)
    {
        p = p->next;
        i++;
    }
    p->next = ptr;
    ptr->next = p->next;    
    return p;
}

void printList(node* n)
{
    cout<<"Linked List is as following ... "<<endl;
    while(n != NULL)
    {
        cout<<n->data<<"\t";
        n = n->next;
    }
}
int main()
{
    node *head;
    node *second;
    node *third;
    node *fourth;
    node *fifth;
    node *sixth;
    node *seventh;
    node *eighth;
    

    head = new node();
    second = new node();
    third = new node();
    fourth = new node();
    fifth = new node();
    sixth = new node();
    seventh = new node();
    eighth = new node();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 4;
    third->next = fourth;
    fourth->data = 3;
    fourth->next = fifth;
    fifth->data = 9;
    fifth->next = sixth;
    sixth->data = 13;
    sixth->next = seventh;
    seventh->data = 17;
    seventh->next = eighth;
    eighth->data = 21;
    eighth->next = NULL;

    printList(head);

    //Deleting the value at the first position
    // cout<<"\n\nLinked List after deletion ... "<<endl;
    // head = deleteFirst(head);
    // printList(head);

    //Deleting the value at the index
    cout<<"\n\nLinked List after deletion ... "<<endl;
    head = deleteAtIndex(head, 3);
    printList(head);
    return 0;
}