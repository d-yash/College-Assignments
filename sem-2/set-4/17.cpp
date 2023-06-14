#include<iostream>
using namespace std;

/* make 3 setter function 
one without any arguments 
one with one arguments -> real=img
one with two arguments 
*/
class Complex
{
    int real, img;
    public:
        void setData()
        {
            real=0;
            img=0;
        }
        void setData(int n) 
        {
            real=n;
            img=real;
        }
        void setData(int n, int m)
        {
            real=n;
            img=m;
        }
        void display()
        {
            cout<<"Complex number is : "<<real<<" + "<<img<<"i"<<endl;
        }
};
int main()
{
    Complex c1,c2,c3;

    c1.setData();
    c2.setData(24);
    c3.setData(30, 11);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
