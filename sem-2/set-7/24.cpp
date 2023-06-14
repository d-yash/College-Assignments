/*Write a C++ Program to implement following inheritance structure.
 Write input/output functions to test your code.*/

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;
    string name;

public:
    Student()
    {
        roll_no = 0;
        name = '\0';
    }
    Student(int r, string n) : roll_no(r), name(n) {}
    virtual void show_detail()
    {
        cout << "\nRollno: " << roll_no << "\tName: " << name << endl;
    }
};
class Exam : protected Student
{
protected:
    int marks[6];
    Exam() : Student()
    {
        for (int i = 0; i < 6; i++)
            marks[i] = 0;
    }
    Exam(int r, string n, int *m) : Student(r, n)
    {
        for (int i = 0; i < 6; i++)
        {
            marks[i] = m[i];
        }
    }
    void show_detail()
    {
        Student ::show_detail();
        cout << "Marks of all subjects are as following ..." << endl;
        for (int i = 0; i < 6; i++)
        {
            cout << marks[i] << "\t";
        }
    }
};
class Sports : protected Student
{
protected:
    string sportsName;
    int rank;
    Sports() : Student() {}
    Sports(string sname, int R)
    {
        sportsName = sname;
        rank = R;
    }
    void show_sports()
    {
        cout << "Sport name: " << sportsName << "\t";
        cout << "Rank in the Sports : " << rank << endl;
    }
};
class Result : protected Exam, protected Sports
{
protected:
    int totalMarks = 0;
    double per;

public:
    Result() { totalMarks = 0; }
    Result(int r, string n, int *m, string sname, int R) : Exam(r, n, m), Sports(sname, R) {}
    void find_total()
    {
        for (int i = 0; i < 6; i++)
        {
            totalMarks = totalMarks + marks[i];
        }
        per = totalMarks / 6;
    }
    void show_detail()
    {
        Exam ::show_detail();
        cout << "\nTotal Marks = " << totalMarks << "\t"
             << "Percentage = " << per << " %" << endl;
        Sports ::show_sports();
    }
};
int main()
{
    int r, R;
    int m[6];
    string n, sname;

    cout << "Enter the Roll no of the student : ";
    cin >> r;
    cout << "Enter the Name of the student : ";
    fflush(stdin);
    getline(cin, n);
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the Marks of subject " << i + 1 << " : ";
        cin >> m[i];
    }
    fflush(stdin);
    cout << "Enter the Name of the sport : ";
    getline(cin, sname);
    cout << "Enter the Rank : ";
    cin >> R;
    Result res(r, n, m, sname, R);
    res.find_total();
    res.show_detail();
    return 0;
}