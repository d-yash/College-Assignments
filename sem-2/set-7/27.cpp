/*Write a program to find the larger of two given numbers in two different classes using friend 
function. */

#include<iostream>
using namespace std;
class second;
class first
{
    int a;
    friend void find_max(first , second);
    public:
        void setA()
        {
            cout<<"Enter the First Number : ";
            cin>>a;
        }
};
class second
{
    int b;
    friend void find_max(first , second);
    public:
        void setB()
        {
            cout<<"Enter the Second Number : ";
            cin>>b;
        }
};
void find_max(first x, second y)
{
    if(x.a > y.b)
        cout<<"\n"<<x.a<<" is Maximum"<<endl;
    else if(x.a < y.b)
        cout<<"\n"<<y.b<<" is Maximum"<<endl;
    else
        cout<<"\n"<<"Both Numbers are Equal"<<endl;
}
int main()
{
    first f;
    f.setA();
    second s;
    s.setB();
    find_max(f, s);
    return 0;
}