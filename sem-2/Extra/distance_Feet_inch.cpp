#include<iostream>
using namespace std;
/*Create a class Distance, which accepts data in feet and inches adds two distances and 
displays the members of the distance object in the appropriate form. Test the class in the 
main program by creating object d1 and d2 of type distance, accept data for each object 
and add them then display them.*/
class Distance
{
    int feet, inches;
    static int i;
    public:
        void setDistance()
        {
            cout<<"Enter the "<<i<<" distance in feet and inches : ";
            cin>>feet>>inches;
            i++;
        }
        Distance operator+(Distance td)
        {
            Distance d;
            d.feet = this->feet + td.feet;
            d.inches = this->inches + td.inches;
            d.feet += d.inches/12;
            d.inches %= 12;
            return d;
        }
        void printDistance()
        {
            cout<<feet<<" "<<inches<<endl;
        }
};
int Distance :: i = 1;
int main()
{
    Distance d1, d2, d;
    d1.setDistance();
    d2.setDistance();
    cout<<"\nFirst Distance : ";
    d1.printDistance();
    cout<<"Second Distance : ";
    d2.printDistance();
    d = d1 + d2;
    cout<<"\nTotal Distance : ";
    d.printDistance();
    return 0;
}