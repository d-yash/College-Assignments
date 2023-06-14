#include<iostream>
using namespace std;

//WAP to find the maximum price of 2 books and return that book as object by object as function argument. 

class book
{
    int price;
    char name[50];
    public:
        void getData(void);
        void printMax(void);
        book maxPrice(book );
};
void book :: getData(void)
{
    cout<<"Enter the name of the book : ";
    fflush(stdin);
    cin.getline(name,50);
    cout<<"Enter the price of the book : ";
    cin>>price;
}
void book :: printMax(void)
{
    cout<<"\nPrice of "<<name<<" is Highest"<<endl
        <<"Price is : "<<price<<endl;
}
book book :: maxPrice(book b2)
{
    if(this->price > b2.price)
        return (*this);
    else    
        return b2;
}
int main()
{
    book b1, b2, b;
    b1.getData();
    b2.getData();
    b = b1.maxPrice(b2);
    b.printMax();    
    return 0;
}