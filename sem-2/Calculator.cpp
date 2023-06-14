/*Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / 
        and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any 
        four scientific operation of your chioice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and scientific 
        calculator.
    Q4. How is code reusability implemented?
*/
#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
    float num1, num2, ans;
    char choice;
public:
    void userchoice()
    {
        cout<<"Enter your choice( +, - , * , / ) : ";
        cin >> choice;
        switch (choice)
        {
        case '+':
            setData();
            ans = (num1 + num2);
            printAnswer('+');
            break;
        case '-':
            setData();
            ans = (num1 - num2);
            printAnswer('-');
            break;
        case '*':
            setData();
            ans = (num1 * num2);
            printAnswer('*');
            break;
        case '/':
            setData();
            ans = (num1 / num2);
            printAnswer('/');
            break;
        default:
            setData();
            cout << "\nEnter valid choice  !!" << endl;
            break;
        }
    }
    void setData()
    {
        cout<<"Enter the first number : ";
        cin>>num1;
        cout<<"Enter the second number : ";
        cin>>num2;
    }
    void printAnswer(char x)
    {
        cout <<endl << num1 <<" "<< x <<" "<< num2 << " = " << ans;
    }
};
class ScientificCalculator
{
    float num, angle, ans;
    char choice;
    public:
        void userchoice()
        {
            cout<<"Enter 's' for Sin()"<<endl
                <<"Enter 'c' for Cos()"<<endl
                <<"Enter 'q' for square"<<endl
                <<"Enter 'r' for sqrt"<<endl
                <<"Enter your choice : "<<endl;
            cin>>choice;
            switch (choice)
            {
            case 's':
                setAngle();
                ans = sin(angle);
                printAns(choice);
                break;
            case 'c':
                setAngle();
                ans = cos(angle);
                printAns(choice);
                break;
            case 'q':
                setNumber();
                ans = num*num;
                printAns(choice);
                break;
            case 'r':
                setNumber();
                ans = sqrt(num);
                printAns(choice);
                break;            
            default:
                cout<<"\nEnter valid choice !!"<<endl;
                break;
            }
        }
        void setNumber()
        {
            cout<<"Enter the number : ";
            cin>>num;
        }
        void setAngle()
        {
            cout<<"Enter the value of Angle <In radian> : ";
            cin>>angle;
        }
        void printAns(char x)
        {
            if(x=='s')
                cout<<"\nSin "<<"( "<<angle<<" )"<<" = "<<ans<<endl;
            else if(x=='c')
                cout<<"\nCos "<<"( "<<angle<<" )"<<" = "<<ans<<endl;
            else if(x=='q')
                cout<<"\n"<<num<<"²"<<" = "<<ans<<endl;
            else if(x=='r')
                cout<<"\n"<<"( "<<num<<" )½"<<" = "<<ans<<endl;
        } 
};
int main()
{
    int access;
    SimpleCalculator simple;
    ScientificCalculator sci;
    cout<<"Enter 1 to Access Simple Calculator"<<endl;
    cout<<"Enter 2 to Access Scienctific Calculator"<<endl;
    cout<<"Which calculator do you want to use : ";
    cin>>access;
    switch (access)
    {
    case 1:
        simple.userchoice();
        break;
    case 2:
        sci.userchoice();
        break;
    default:
        cout<<"\nEnter Valid choice !!"<<endl;
        break;
    }  
    return 0;
}