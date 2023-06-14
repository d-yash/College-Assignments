/* Write a program to define the function template for calculating the square of given numbers 
with different data types. */

#include <iostream>
using namespace std;

template <typename T>
inline T squ(T temp)
{
    return temp * temp;
}
int main()
{
    cout << "Square of the integer : " << squ<int>(24) << endl;
    cout << "Square of the double : " << squ<double>(30.11) << endl;
    cout << "square of the long integer : " << squ<long int>(1231) << endl;
    return 0;
}