#include<iostream>
using namespace std;

// create two inline functions to perform multiplication and division 
inline float multi(float a, float b)
{
    return a*b;
}
inline float div(float a, float b)
{
    return a/b;
}  
int main()
{
    float a, b;
    cout<<"Enter any two numbers : ";
    cin>>a>>b;
    cout<<"Multiplication of "<<a<<"*"<<b<<" is : "<<multi(a, b)<<endl;
    cout<<"Division of "<<a<<"/"<<b<<" is : "<<div(a, b)<<endl;
    return 0;
}