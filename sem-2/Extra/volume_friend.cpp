#include<iostream>
#include<cmath>
using namespace std;

/*Given the following class specifications and using friend as a bridge, write a function to calculate the volume,
assign it to member vol in class volume and display the value of vol.*/
class cylinder
{
    int r, h;
    public:
        void setData();
        void calcVol();
};
class volume
{
    double vol;
    friend void cylinder :: calcVol();
    public:
        void printVol()
        {
            cout<<"\nVolume of the cylinder is : "<<vol<<" cubic cm"<<endl;
        }
};
void cylinder :: setData()
{
    cout<<"Enter the radius of cylinder <in cm> : ";
    cin>>r;
    cout<<"Enter the height of cylinder <in cm> : ";
    cin>>h;
}
void cylinder :: calcVol()
{
    volume v;
    v.vol = M_PI*r*r*h;
    v.printVol();
}
int main()
{
    cylinder c;
    c.setData();
    c.calcVol();
    return 0;
}