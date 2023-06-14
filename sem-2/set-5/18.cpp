#include<iostream>
using namespace std;
/*
Write a program to create a class TEST with one int member. Define constructor, destructor 
and getter for the same. Define a function (outside class) find_square that takes object as an 
argument and returns square of int member of that object. Also define destructor. 
*/
class TEST
{
    int num;
    public:
        TEST() : num(0) {}
        TEST(int n) : num(n) {} 
        int getnum()
        {
            return num;
        }
        ~TEST(){}
};
inline int find_square(TEST t)
{
    return t.getnum()*t.getnum();
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    TEST t(n);
    cout<<"Square of the number is: "<<find_square(t)<<endl;
    return 0;
}