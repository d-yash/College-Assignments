#include<iostream>
#include<cstring>
using namespace std;

class Stack{
    char s[30];
    int n, top;
    public:
        Stack()
        {
            n = 30;
            top = -1;
        }
        void push(char ch)
        {
            if(top == n-1)
            {
                cout<<"\nOverflow ..."<<endl;
                return;
            }
            top++;
            s[top] = ch;
        }
        char pop()
        {
            if(top == -1)
            {
                cout<<"\nUnderflow ..."<<endl;
                return '\0';
            }
            char temp = s[top];
            top--;
            return temp;
        }
        char peek()
        {
            if(top == -1)
            {
                cout<<"\nUnderflow ..."<<endl;
                return '\0';
            }
            return s[top];
        }
        void printStack()
        {
            for(int i=0; i<=top; i++)
                cout<<s[i];
            cout<<endl;
        }
};
int f(char ch)
{
    if(ch == '+' || ch =='-')
        return 1;
    else if(ch =='*' || ch == '/')
        return 3;
    else if(ch == '^')
        return 6;
    else if((ch >= 'A' && ch <='Z') || (ch>='a' && ch<='z'))
        return 7;
    else if(ch =='(')
        return 9;
    else if(ch == ')')
        return 0;
    else 
        return -1;    
}
int g(char ch)
{
    if(ch == '+' || ch =='-')
        return 2;
    else if(ch =='*' || ch == '/')
        return 4;
    else if(ch == '^')
        return 5;
    else if((ch >= 'A' && ch <='Z') || (ch>='a' && ch<='z'))
        return 8;
    else if(ch =='(')
        return 0;
    else 
        return -1;    
}
int r(char ch)
{
    if((ch >= 'A' && ch <='Z') || (ch>='a' && ch<='z'))
        return 1;
    else if(ch == '+' || ch =='-' || ch == '*' || ch == '/')
        return -1;
    else    
        return 0;
}
int main()
{
    char infix[30], postfix[30] = {'\0'};
    int rank = 0;
    char next = '\0', temp;
    cout<<"\nEnter infix operation <End with extra ')' > : ";
    cin>>infix;

    int j=0;
    Stack s;
    s.push('(');
    for(int i=0; infix[i]!='\0'; i++)
    {
        next = infix[i];
        while(f(next) < g(s.peek()))
        {
            temp = s.pop();
            postfix[j++] = temp;
            rank = rank + r(temp);
            if(rank < 1)
            {
                cout<<"\nInvalid infix expression ... "<<endl;
                return 0;
            }
        } 
        if(f(next) == g(s.peek()))
            s.pop();
        else
            s.push(next);        
    }
    postfix[j] = '\0';
    cout<<"\nPostfix : "<<postfix<<endl;
    return 0;
}