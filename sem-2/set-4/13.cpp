#include<iostream>
using namespace std;

//WAP to create class for book having title, price and publisher, getter and setter functions with 2 objects

class book
{
    char title[50], publisher[15];
    double price, max=0;
    public:
        void getDetails();
        void setDetails();
};
void book :: getDetails()
{
    fflush(stdin);
    cout<<"Enter the name of the book: ";
    fflush(stdin);
    cin.getline(title,50);
    cout<<"Enter Price of the book: ";
    cin>>price;
    cout<<"Enter Publisher's Name: ";
    fflush(stdin);
    cin.getline(publisher,15);
}
void book :: setDetails()
{
    cout<<"\nName of the book: "<<title<<endl;
    cout<<"Price of the book: "<<price<<endl;
    cout<<"Publisher's Name: "<<publisher<<endl;
}
int main()
{
    int i, n;

    cout<<"Details of howmany books that you want to enter : ";
    cin>>n;
    book b[n];
    for(i=1;i<=n;i++)
    {
        cout<<"\nEnter book no. "<<i<<" Detail below..."<<endl;
        b[i].getDetails();
    }
    for(int i=1; i<=n; i++)
    {
        b[i].setDetails();
    }
    return 0;
}