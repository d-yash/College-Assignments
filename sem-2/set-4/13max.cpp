#include<iostream>
using namespace std;

//WAP to create class for book having title, price and publisher, getter and setter functions with 2 objects
class book
{
    char title[50], publisher[15];
    double price, max=0;
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
        void maxprice(book b[0], int n)
        {
            b[0].max=0;
            int m;
            for(int i=1;i<=n;i++)
            {
                if(b[i].price>b[0].max)
                {
                    b[0].max=b[i].price;
                    m=i;
                    // b[0]=b[i];
                }
            }
            cout<<"\nThe most Expensive book is ....."<<endl;
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
    b[0].maxprice(b,n);
    // void setDetails()
    // {
    //     cout<<"Name of the book: "<<title<<endl;
    //     cout<<"Price of the book: "<<price<<endl;
    //     cout<<"Publisher's Name: "<<publisher<<endl<<endl;
    // }
    return 0;
}
