/*Create a class called LIST with two pure virtual function store () and retrieve().
To store a value call store and to retrieve call retrieve function. Derive two classes
stack and queue from it and override store and retrieve.*/

#include<iostream>
using namespace std;

class List
{   
    protected:
        int list[10];
        int index = -1;
        void virtual store(int ) = 0;
        void virtual retrieve() = 0;        
};
class Stack : protected List
{
    public:
        void store(int n)
        {
            index++;
            list[index] = n;
        }
        void retrieve()
        {
            cout<<"Stack is as following ..."<<endl;
            for(int i=index; i>-1; i--)
                cout << list[i] << "\t";
        }
};
class Queue : protected List
{
    public:
        void store(int n)
        {
            index++;
            list[index] = n;
        }
        void retrieve()
        {
            cout << "\nQueue is as following ..."<<endl;
            for(int i=0; i<=index; i++)
                cout << list[i] << "\t";
        }
};
int main()
{
    Stack s;  
    s.store(25); s.store(47); s.store(59); s.store(88); s.store(29); s.store(100);
    s.retrieve();

    Queue q;
    q.store(48); q.store(67); q.store(89); q.store(39); q.store(15); q.store(51); 
    q.retrieve();
    return 0;
}