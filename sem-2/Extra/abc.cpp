#include <iostream>
using namespace std;

/*Imagine a check-post at a bridge. Car passing by the check-post are expected to pay Rs. 50 as tax. 
Most of the cars pay but sometimes a car goes without paying the tax. The check-post has to keep track 
of number of cars and amount collected. 
Create a class check to implement this problem. The data members of the class are no, to count number of 
class and amount to keep track of the amount collected. Write member function paying for cars which are paying 
the tax and another function nopay for cars not paying the tax, also write a function to display number of cars 
passed and amount collected. Write a menu driven main program with option for paying car, another for not paying 
car, option to display the result and exit option. Create a single object of check type to test the class.*/

class check
{
    int countPaid = 0, countNotPaid = 0, totalAmount = 0;

public:
    void paidCars()
    {
        countPaid++;
        totalAmount += 50;
    }
    void notPaidCars()
    {
        countNotPaid++;
    }
    void displayData()
    {
        cout << "\n\nTotal Cars have passed : " << countNotPaid + countPaid << endl
             << "Total Cars which have paid tax : " << countPaid << endl
             << "Total Cars which have not paid tax : " << countNotPaid << endl
             << "Total Amount Collected : " << totalAmount << " Rs." << endl;
    }
}c;
int main()
{
    char choice;
    // check c;
    cout << "Enter <p> for paying..." << endl
         << "Enter <n> for not paying..." << endl
         << "Enter <d> for display..." << endl;
    top:
    cin >> choice;

    if (choice == 'p' || choice == 'n' || choice == 'd')
    {
        if (choice == 'p')
        {
            c.paidCars();
            goto top;
        }
        else if (choice == 'n')
        {
            c.notPaidCars();
            goto top;
        }
        else if (choice == 'd')
        {
            c.displayData();
        }
    }
    else
    {
        cout<<"Enter valid choice..."<<endl
            <<"This won't be counted"<<endl;
        goto top;
    }
    return 0;
}