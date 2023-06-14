#include<iostream>
using namespace std;

/*With reference to previous program, add 2 member variables serial_no and no_of_books 
(declare both as static variables) in class named books .Create a friend function getcount( ) 
to demonstrate the concept of friend function.*/
class book
{
    static int countB;
    static int srNumber;
    char title[50];
    float price;
    public:
        void details();
        void printData();
        void getCount();
};
int book :: countB = 0;
int book :: srNumber = 0;
void book :: details()
{
    cout<<"Enter the name of the book : ";
    fflush(stdin);
    cin.getline(title,50);
    cout<<"Enter the price of the book : ";
    cin>>price;
    countB++;
    srNumber++;
}
void book :: printData()
{
    cout<<"\nTitle of the book : "<<title<<endl;
    cout<<"Price of the book : "<<price<<endl;
}
void book :: getCount()
{
    cout<<"\n\nTotal books are : "<<countB<<endl;
}
int main()
{
    book b1, b2;
    b1.details();
    b2.details();
    b1.printData();
    b2.printData();
    b2.getCount();
    return 0;
}