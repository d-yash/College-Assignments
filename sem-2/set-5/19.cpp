#include<iostream>
using namespace std;

/*Write a program to perform addition of two complex numbers using constructor overloading. 
Define add function outside the class that returns the addition. Also define destructor.*/
class Complex
{
    int a, b;
    public:
        Complex(){}
        Complex(int i, int j) : a(i), b(j) {}
        int getA(){return a;}
        int getB(){return b;}
        void setA(int a){this->a = a;}
        void setB(int b){this->b = b;}
        void printData();        
        ~Complex(){}
};
Complex add(Complex c1, Complex c2)
{
    Complex temp;
    temp.setA(c1.getA() + c2.getA());
    temp.setB(c1.getB() + c2.getB()); 
    return temp;
}
void Complex :: printData()
{
    cout<<"Sum of two Complex number is = "<<a<<" + "<<b<<"i"<<endl;
}
int main()
{
    int i, j, m, n;
    cout<<"Enter the value of First complex number : ";
    cin>>i>>j;
    cout<<"Enter the vlaue of Second complex number : ";
    cin>>m>>n;
    Complex c1(i, j);
    c1.printData();
    Complex c2(m, n);
    c2.printData();
    Complex c3 = add(c1,c2);
    cout<<"Addition : ";cout<<"Sum "<<endl;
    c3.printData();
    return 0;
}