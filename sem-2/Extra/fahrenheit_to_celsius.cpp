#include<iostream>
using namespace std;
/*WAP that will ask for a temperature in Fahrenheit and display it in Celsius using a class
called temp and member functions*/
class temp
{
    int tempF, tempC;
    public:
        void setTemp()
        {
            cout<<"Enter the temperature in Fahrenheit : ";
            cin>>tempF;
        }
        int getTempC()
        {
            tempC = 5/9*(tempF - 32);
            return tempC;
        }
        void printTempc()
        {
            cout<<"Temperature in Celsius : "<<getTempC()<<" degree celsius"<<endl;
        }
};
int main()
{
    temp t;
    t.setTemp();
    t.printTempc();
    return 0;
}