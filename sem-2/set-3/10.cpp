#include<iostream>
#include<math.h>
using namespace std;

// return absolute value of int, floating point number and double
void absolute(double c)
{
    //(a>=0)?a:-a;
    cout<<"Absolute value of "<<c<<" is : "<<fabs(c)<<endl;
} 
void absolute(float b)
{
    cout<<"Absolute value of "<<b<<" is : "<<fabs(b)<<endl;
}
void absolute(int a)
{   
    cout<<"Absolute value of "<<a<<" is : "<<abs(a)<<endl;
}

int main()
{   
    // int a; float b; double c;
    // cout<<"Enter any integer : ";
    // cin>>a;
    // cout<<"Enter any float number : ";
    // cin>>b;
    // cout<<"Enter any double number : ";
    // cin>>c;
    absolute(-12);
    absolute(30.11);
    absolute(-24.0303);
    return 0;
}