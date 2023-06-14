/*Create a base class called SHAPE. Use this class to store two double type values. Derive two 
specific classes called TRIANGLE and RECTANGLE from the base class. Add to the base 
class, a member function getdata to initialize base class data members and another member 
function display to compute and display the area of figures. Make display a virtual function 
and redefine this function in the derived classes to suit their requirements. Using these three 
classes design a program that will accept driven of a TRINGLE or RECTANGLE interactively 
and display the area. */

#include<iostream>
using namespace std;

class Shape
{
    virtual void display_area(string name) = 0;
    protected:
    double l, h;
    public:
        void set_shape(string name)
        {
            cout<<"Enter the Length and width of "<<name<<" <in cm> : ";
            cin>>l>>h;
        }
};
class Triangle : public Shape
{
    double area;
    public:
        void display_area(string name)
        {
            area = (l*h)/2;
            cout<<"Area of the "<<name<<" : "<<area<<" cm square"<<endl;
        }
};
class Rectangle : public Shape
{
    double area;
    public:
        void display_area(string name)
        {
            area = l*h;
            cout<<"\nArea of the "<<name<<" : "<<area<<" cm square"<<endl;
        }
};
int main()
{
    char choice;
    menu:
    cout<<"\n\nEnter <r/R> to find the Area of Rectangel.  "<<endl
        <<"Enter <t/T> to find the Area of Triangle. "<<endl;
    cin>>choice;

    if(choice == 't' || choice == 'T')
    {
        Triangle tri;
        tri.set_shape("Triangle");
        tri.display_area("Triangle");
    }
    else if(choice == 'R' || choice == 'r')
    {
        Rectangle rec;
        rec.set_shape("Rectangle");
        rec.display_area("Rectangle");
    }
    else
    {
        cout<<"\nInvalid choice !!"<<endl;
    }
    int again;
    cout<<"\nWould you like to continue ??"<<endl
        <<"Enter '1' to continue."<<endl;
    cin>>again;

    if(again == 1)
        goto menu;

    return 0;
}