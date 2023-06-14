#include<iostream>
using namespace std;

//WAP to create class for book having title, price and publisher, getter and setter functions with 2 objects
class book
{
    char title[50], publisher[15];
    double price;
    public:
        void setDetails();
        void getDetails();
};
void book :: setDetails()
{
    cout<<"Enter the name of the book: ";
    cin.getline(title,50);
    cout<<"Enter Price of the book: ";
    cin>>price;
    cout<<"Enter the  Publisher's Name: ";
    cin.ignore();
    cin.getline(publisher,15);
}
void book :: getDetails()
{
    cout<<"Name of the book: "<<title<<endl;
    cout<<"Price of the book: "<<price<<endl;
    cout<<"Publisher's Name: "<<publisher<<endl;
}
int main()
{
    book b1, b2;

    cout<<"Enter book Details..."<<endl;
    b1.setDetails();
    b2.setDetails();
    cout<<endl<<"The book details are as follows...."<<endl;
    b1.getDetails();
    b2.getDetails();
    
    return 0;
}