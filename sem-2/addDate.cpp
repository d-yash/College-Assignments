#include <iostream>
using namespace std;

//find the difference between two dates

class Date
{
    int dd, mm, yyyy;

public:
    Date();
    Date(int, int, int = 2021);
    ~Date();
    void showDate();
    Date dateDifference(Date);
    Date addDay(int );
    void day_converter();
};
Date::Date() 
{
    dd = 0;
    mm = 0;
    yyyy = 0;
}
Date::Date(int dd, int mm, int yyyy)
{
    this->dd = dd;
    this->mm = mm;
    this->yyyy = yyyy;
}
Date::~Date(){}
void Date::showDate()
{
    cout << "\n" << dd << "/" << mm << "/" << abs(yyyy) << endl;
}
Date Date::dateDifference(Date dx)
{
    Date d3;
    int m, y;
    m = this->mm;
    y = this->yyyy;

    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (this->dd <= dx.dd)
    {
        d3.dd = this->dd + days[m] - dx.dd;
        m--;
    }
    else
    {
        d3.dd = this->dd - dx.dd;
    }
    if (m < dx.mm)
    {
        d3.mm = m + 12 - dx.mm;
        y--;
    }
    else
    {
        d3.mm = m - dx.mm;
    }
    d3.yyyy = (abs)(y - dx.yyyy);
    return (d3);
}
Date Date :: addDay(int day)
{
    Date d3;
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    d3.dd = this->dd + day;
    d3.mm = this->mm;
    d3.yyyy = this->yyyy;
    if(d3.dd > days[this->mm])
    {
        d3.mm = d3.mm + d3.dd/days[this->mm];
        d3.dd = d3.dd%days[this->mm];
    }
    if(this->mm > 12)
    {
        d3.yyyy = d3.yyyy + d3.mm/12;
        d3.mm = d3.mm%12;
    }
    return d3;
}
// void Date :: day_converter()
// {
//     int tday;
//     tday = (this->yyyy*365) + (this->mm*30) + this->dd;
//     cout<<"Total days are : "<<tday<<endl;
// }
int main()
{
    int dd1,m1,y1,dd2,m2,y2;
    char choice;
    menu:
    cout<<"\nEnter + to add days in the date"<<endl;
    cout<<"Enter - to find the differece between two dates"<<endl;
    cout<<"Enter 0 to EXIT"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    Date d3;
    if(choice == '+')
    {
        int day;
        cout<<"Enter value of first date : ";
        cin>>dd1>>m1>>y1;
        cout<<"Howmany number of days you want to Add : ";
        cin>>day;
        Date d1(dd1, m1, y1);
        d3 = d1.addDay(day);
        d3.showDate();
        d3.day_converter();
        goto menu;
    }
    else if(choice == '-')
    {
        cout<<"Enter value of first date : ";
        cin>>dd1>>m1>>y1;
        cout<<"Enter the value of second date : ";
        cin>>dd2>>m2>>y2;
        Date d1(dd1, m1, y1);
        d1.showDate();
        Date d2(dd2, m2, y2);
        d2.showDate();
        if(y1>y2)
            d3 = d1.dateDifference(d2);
        else    
            d3 = d2.dateDifference(d1);
        d3.showDate();
        d3.day_converter();
        goto menu;
    }
    else
    {
        cout<<"\n\nInvalid choice...."<<endl;
        cout<<"Enter valid choice !!"<<endl;
        goto menu;
    }
    return 0;
}
