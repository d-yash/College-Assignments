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
    void dateDifference(Date);
    Date addDay(long int);
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
Date::~Date() {}
void Date::showDate()
{
    cout << "\n"
         << dd << "/" << mm << "/" << abs(yyyy) << endl;
}
void Date::dateDifference(Date dx)
{
    int day_difference = 0;         // 19-5-2021    24-8-1990
    if (this->yyyy >= dx.yyyy)  //this->2021    dx = 1990
    {
        for (int i = this->yyyy; i > dx.yyyy; i--)
        {
            if ((i % 400 == 0) || (i % 100 != 0 && i % 4 == 0))
            {
                day_difference = day_difference + 366;
            }
            else
            {
                day_difference = day_difference + 365;
            }
        }
    }
    else
    {
        for (int i = dx.yyyy; i > this->yyyy; i--)
        {
            if ((i % 400 == 0) || (i % 100 != 0 && i % 4 == 0))
            {
                day_difference = day_difference + 366;
            }
            else
            {
                day_difference = day_difference + 365;
            }
        }
    }
    if (this->mm >= dx.mm)      // may aug
    {
        for (int i = this->mm; i > dx.mm; i--)
        {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            {
                day_difference += 31;
            }
            else if (i == 2)
            {
                day_difference += 28;
            }
            else
            {
                day_difference += 30;
            }
        }
    }
    else
    {
        for (int i = dx.mm; i > this->mm; i--)
        {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            {
                day_difference += 31;
            }
            else if (i == 2)
            {
                day_difference += 28;
            }
            else
            {
                day_difference += 30;
            }
        }
    }
    day_difference += (abs)(this->dd - dx.dd);
    cout << "\n\nDifference of Days between two dates are : " << day_difference << endl;
}
Date Date ::addDay(long int day)
{
    Date d3;
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    d3.dd = this->dd + day;
    d3.mm = this->mm;
    d3.yyyy = this->yyyy;
    if (d3.dd > days[this->mm])
    {
        d3.mm = d3.mm + d3.dd / days[this->mm];
        d3.dd = d3.dd % days[this->mm];
    }
    if (this->mm > 12)
    {
        d3.yyyy = d3.yyyy + d3.mm / 12;
        d3.mm = d3.mm % 12;
    }
    return d3;
}
void checkDate(int dd, int mm)
{
    if(mm > 12 || mm < 1)
    {
        cout<<"\nEnter Month Properly !"<<endl;
    }
    if(dd > 31 || dd < 1)
    {
        cout<<"Enter Days Properly !"<<endl;
    }   
}
int main()
{
    int dd1, m1, y1, dd2, m2, y2;
    char choice;
menu:
    cout << "\n-------------------------------------------------------" << endl;
    cout << "Enter + to add days in the date" << endl;
    cout << "Enter - to find the differece between two dates" << endl;
    cout << "Enter 0 to EXIT" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "\nEnter your choice : ";
    cin >> choice;
    Date d3;
    if (choice == '+')
    {
        long int day;
        cout << "Enter value of first date : ";
        cin >> dd1 >> m1 >> y1;
        checkDate(dd1, m1);
        cout << "Howmany number of days you want to Add : ";
        cin >> day;
        Date d1(dd1, m1, y1);
        d3 = d1.addDay(day);
        cout << "\nDate after adding days ..." << endl;
        d3.showDate();
    }
    else if (choice == '-')
    {
        cout << "Enter value of first date : ";
        cin >> dd1 >> m1 >> y1;
        checkDate(dd1, m1);
        cout << "Enter the value of second date : ";
        cin >> dd2 >> m2 >> y2;
        checkDate(dd2, m2);
        Date d1(dd1, m1, y1);
        d1.showDate();
        Date d2(dd2, m2, y2);
        d2.showDate();
        d1.dateDifference(d2);
    }
    else if (choice == '0')
    {
        goto again;
    }
    else
    {
        cout << "\n\nInvalid choice...." << endl;
        cout << "Enter valid choice !!\n"
             << endl;
    }
    char con;
again:
    cout << "\nEnter < y/Y > to continue  ";
    cin >> con;
    if (con == 'y' || con == 'Y')
    {
        goto menu;
    }
    return 0;
}