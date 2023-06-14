#include<iostream>
using namespace std;

//WAP to create class for book having title, price and publisher, getter and setter functions with 2 objects
class book
{
    char title[50], publisher[15];
    double price, min;
    public:
        void getDetails()
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
        void minprice(book b[0], int n)
        {
            int m;
            for(int i=1;i<=n;i++)
            {
                static int min = b[1].price;
                if(b[i].price<min)
                {
                    min=b[i].price;
                    m=i;
                    // b[0]=b[i];
                }
            }
            cout<<"\nThe most Affordable book is ....."<<endl;
            b[m].setDetails();
        }
        void setDetails()
        {
            cout<<"\nName of the book: "<<title<<endl;
            cout<<"Price of the book: "<<price<<endl;
            cout<<"Publisher's Name: "<<publisher<<endl;
        }
};
int main()
{
    int i, n;

    cout<<"Enter any number: ";
    cin>>n;
    book b[n];
    for(i=1;i<=n;i++)
    {
        cout<<"Enter book no. "<<i<<" Detail below..."<<endl;
        b[i].getDetails();
    }
    // for(int i=1; i<=n; i++)
    // {
    //     b[i].setDetails();
    // }
    b[0].minprice(b,n);
    // void setDetails()
    // {
    //     cout<<"Name of the book: "<<title<<endl;
    //     cout<<"Price of the book: "<<price<<endl;
    //     cout<<"Publisher's Name: "<<publisher<<endl<<endl;
    // }
    return 0;
}