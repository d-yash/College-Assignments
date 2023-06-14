#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
class linkedList
{
    Node *Top;
    public:
        linkedList()
        {
            Top = NULL;
        }
        void push(int value)
        {
            Node *x;
            x = new Node;
            x->data = value;
            x->next = NULL;

            x->next = Top;
            Top = x;
            cout<<value<<" has been pushed"<<endl;
        }
        int pop()
        {
            if(Top == NULL)
            {
                cout<<"Linked List is empty...\nUnderflow ..."<<endl;
                return -1;
            }
            int temp = Top->data;
            Node *p;
            p = Top;
            Top = Top->next;
            delete p;
            return temp;
        }
        void traverse()
        {
            Node *p;
            for(p=Top; p!=NULL; p=p->next)
            {
                cout<<p->data<<"\t";
            }
            cout<<endl;
        }
};  
int main()
{
    linkedList link;
    int choice;
    while (choice!=4)
    {
        // system("CLS");
        cout<<"\nEnter 1 to do Push operation."<<endl;
        cout<<"Enter 2 to do Pop operation."<<endl;
        cout<<"Enter 3 to do Traverse."<<endl;
        cout<<"Enter 4 to exit."<<endl;
        cout<<"\nEnter your choice : ";
        cin>>choice;
        int value;
        switch (choice)
        {
        case 1:
            cout<<"\nEnter the value : ";
            cin>>value;
            system("CLS");
            link.push(value);
            break;
        case 2:
            value = link.pop();
            system("CLS");
            cout<<value<<" has been Popped"<<endl;
            break;
        case 3:
            system("CLS");
            link.traverse();
            break;
        case 4:
            return 0;
            break;
        default:
            cout<<"Invalid choice!"<<endl;
            break;
        }
    }
    
    return 0;
}