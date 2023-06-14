#include<iostream>
using namespace std;

class Stack
{
    int arr[20];
    int top = -1;
    public:
        Stack()
        {
            for(int i=0; i<20; i++)
                arr[i] = 0;
            top = -1;
        }
        void Push()
        {
            if(top > 20)
                cout << "\n\tStack Overflow!" << endl;
            else
            {
                cout<<"\nEnter the element : ";
                top++;
                cin >> arr[top];
            }
            cout<<"\t\tElement entered successfully."<<endl;
        }
        void printStack()
        {
            cout<<"\n\nStack is as following ...\n"<<endl;
            for(int i=0; i<=top; i++)
                cout<<arr[i]<<"\t";
        }
        void Pop()
        {
            if(top < 0)
                cout<<"\n\t\tStack Underflow!"<<endl;
            else
            {
                system("CLS");
                cout<<"\n\nPoped Element is "<<arr[top]<<endl;
                top--;
            }
        }
        void Peep()
        {
            cout<<"\nTop most element is "<<arr[top]<<endl;
        }
};
int main()
{
    Stack s;
    int n;
    cout<<"\nHow many elements would you like to enter : ";
    cin>>n;
    for(int i=0; i<n; i++)
        s.Push();
    // s.printStack();
    // s.Pop();
    s.printStack();
    s.Peep();
    return 0;
}