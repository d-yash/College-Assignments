#include<iostream>
using namespace std;

/*Write a program that defines a shape class with a constructor that gives value to width and height. 
The define two sub-classes triangle and rectangle, that calculate the area of the shape area (). In the main, 
define two variables a triangle and a rectangle and then call the area() function in this two varibles.*/

class shape
{
    protected:
    int width, height;
        shape(){ width = 0; height = 0;}
        shape(int w, int h) : width(w), height(h) {} 
};
class triangle : protected shape
{
    float at;
    public:
        triangle(int m, int n) : shape(m, n){}
        void area_triangle()
        {
            at = height*width/2;
            cout<<"\nArea of the triangle is : "<<at<<"cm square"<<endl;
        }
};
class rectangle : protected shape
{
    float ar;
    public:
        rectangle(int m, int n) : shape(m, n){}
        void area_rectangle()
        {
            ar = height*width;
            cout<<"\nArea of the rectangle is : "<<ar<<"cm square"<<endl;
        }
};
int main()
{
    int h, w;
    cout<<"Enter the value of height and width < in cm >: ";
    cin>>h>>w;
    triangle t(h,w);
    rectangle r(h,w);

    t.area_triangle();
    r.area_rectangle();
    return 0;
}