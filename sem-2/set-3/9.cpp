#include<iostream>
using namespace std;
void pow(double m, int n=2)
{
    double ans=1;
    for(int i=0; i<n; i++)
    {
        ans*=m;
    }
    cout<<"Power is : "<<ans;
}
int main()
{
    int n;
    double m;
    cout<<"Enter base : ";
    cin>>m;
    cout<<"Enter power : ";
    cin>>n;
    pow(m,n);
    return 0;
}