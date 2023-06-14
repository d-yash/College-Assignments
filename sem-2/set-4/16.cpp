#include <iostream>
using namespace std;
class sample
{
    static int n;

public:
    void printN();
};
int sample ::n = 0;
void sample ::printN()
{
    cout << n << endl;
    n++;
}
int m = 100;
int main()
{
    int m = 10;
    cout << "Value of m outside main is : " << ::m << endl;
    cout << "Value of m inside main is : " << m << endl;
    sample s1, s2, s3, s4, s5;
    s1.printN();
    s2.printN();
    s3.printN();
    s4.printN();
    s5.printN();
    return 0;
}