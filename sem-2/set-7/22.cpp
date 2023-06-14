/*magine a publishing company that markets both book and audiocassette versions of its works. 
Create a class publication that stores the title (a string) and price (type float) of a publication. 
From this class derive two classes: book, which adds a page count (type int), and tape, which 
adds a playing time in minutes (type float). Each of these three classes should have a getdata() 
function to get its data from the user at the keyboard, and a putdata() function to display its 
data. Write a main () program to test the book and tape classes by creating instances of them, 
asking the user to fill in data with getdata(), and then displaying the data with putdata().*/

#include<iostream>
using namespace std;

class Publication
{
    protected:
        string tittle;
        int price;
        void set_pub(string name)
        {
            cout<<"\nEnter the Tittle of "<<name<<" : ";
            fflush(stdin);
            getline(cin, tittle);
            cout<<"Enter the Price : ";
            cin>>price;
        }
        void print_pub(string name)
        {
            cout<<"\nTittle of "<<name<<" : "<<tittle<<"\t\t"<<"Price: "<<price<<endl;
        }
};
class Book : private Publication
{
    int page;
    public:
        void set_book()
        {
            set_pub("Book");
            cout<<"Enter the total page: ";
            cin>>page;
        }
        void print_book()
        {
            print_pub("Book");
            cout<<"Total page: "<<page<<endl;
        }
};
class Tap : private Publication
{
    float playTime;
    public:
        void set_tap()
        {
            set_pub("Tap");
            cout<<"Enter the Play time: ";
            cin>>playTime;
        }
        void print_tap()
        {
            print_pub("Tap");
            cout<<"Play time: "<<playTime<<endl;
        }
};
int main()
{
    Book b;
    Tap t;
    b.set_book();
    t.set_tap();
    b.print_book();
    t.print_tap();
    return 0;
}