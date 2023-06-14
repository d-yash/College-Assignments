#include<iostream>
using namespace std;

/*Create a class that contains variables for storing feet and its equivalent value of inches. Pass to the class's 
constructor no. of feet and have the constructor display the no. of inches.*/

class convert
{
    int feet;
    public:
        convert(){feet=0;}
        convert(int feet)
        {
            cout<<feet<<" feet = "<<feet*12<<" inch"<<endl;
        }
};
int main()
{
    int feet;
    cout<<"Enter the length in feet : ";
    cin>>feet;
    convert c(feet);   
    return 0;
}