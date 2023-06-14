#include<iostream>
using namespace std;
    
int main()
{
    int n;
    cout<<"\nEnter the total amount : ";
    cin>>n;

    int chocolate, repar;
    chocolate = n / 1;
    int total = chocolate;
    again:
    repar = chocolate;
    chocolate = repar / 3;
    total += repar/3;
    if(repar >= 3)
    {
        goto again;
    }
    cout<<"\nTotal chocolates : "<<total<<endl;
    return 0;
}