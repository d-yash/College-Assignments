#include<iostream>
using namespace std;
//itemno, name, price
class product
{
    public:
        int itemNo, name, price;
        void setData();
        void line();
        void printProduct();
};
class discount : private product
{
    int disPercent, disprice;
    public:
        void setDiscount();
        void countDiscount();
};
void product :: setData()
{
    cout<<"\nEnter the Name of the product : ";
    cin>>name;
    cout<<"Enter the item No. : ";
    cin>>itemNo;
    cout<<"Enter the price of the product : ";
    cin>>price;
}
void product :: line()
{
    cout<<"------------------"<<endl;
}
void product :: printProduct()
{
    cout<<"Item Name : "<<name<<endl
        <<"Item NO. : "<<itemNo<<endl
        <<"Item price : "<<price<<endl;
} 
void discount :: setDiscount()
{
    cout<<"Enter Dicount Percent : ";
    cin>>disPercent;
}
void discount :: countDiscount()
{
    disprice = price - disPercent/100;
}
int main()
{
    return 0;
}