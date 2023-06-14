/* Create a function using the concept pointers that swaps the private data values of two objects 
of the same class type. */

#include <iostream>
using namespace std;

class test
{
    int a;
    static int i;

public:
    void setData()
    {
        cout << "Enter " << i << " number : ";
        cin >> a;
        i++;
    }
    void display()
    {
        cout << a << endl;
    }
    int getA()
    {
        return a;
    }
    void setA(int m)
    {
        a = m;
    }
};
int test ::i = 1;
void swap(test *x, test *y)
{
    int temp = x->getA();
    x->setA(y->getA());
    y->setA(temp);
}
int main()
{
    test t1, t2;
    t1.setData();
    t2.setData();
    cout << "Values before swapping .... " << endl;
    t1.display();
    t2.display();
    swap(&t1, &t2);
    cout << "Values after swapping .... " << endl;
    t1.display();
    t2.display();
    return 0;
}