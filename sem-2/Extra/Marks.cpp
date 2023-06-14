/*We want to calculate the total marks of each student of a class in Physics,Chemistry and Mathematics and the 
average marks of the class. The number of students in the class are entered by the user. Create a class named Marks 
with data members for roll number, name and marks. Create three other classes inheriting the Marks class, namely 
Physics, Chemistry and Mathematics, which are used to define marks in individual subject of each student. 
Roll number of each student will be generated automatically.*/
#include <iostream>
using namespace std;
class Marks
{
    static int roll_no;
    string name;

public:
    void setData()
    {
        cout << "\n\nEnter the name of the student : ";
    }
    void displayData()
    {
        cout << "\n"
             << roll_no << "\t"
             << "Name : " << name << endl;
        roll_no++;
    }
};
int Marks ::roll_no = 1;
class PHYSICS : public Marks
{
    int phyMarks;

public:
    void setPhy()
    {
        cout << "Enter the marks of Physics : ";
        cin >> phyMarks;
    }
    int getPhy()
    {
        return phyMarks;
    }
};
class CHEMISTRY : public Marks
{
    int cheMarks;

public:
    void setChe()
    {
        cout << "Enter the marks of Chemistry : ";
        cin >> cheMarks;
    }
    int getChe()
    {
        return cheMarks;
    }
};
class MATHS : public Marks
{
    int mathsMarks;

public:
    void setMaths()
    {
        cout << "Enter the marks of Maths : ";
        cin >> mathsMarks;
    }
    int getMaths()
    {
        return mathsMarks;
    }
};
void avgMarks(MATHS M, CHEMISTRY C, PHYSICS P)
{
    float avg;
    avg = (M.getMaths() + P.getPhy() + C.getChe()) / 3;
    cout << "Average : " << avg << endl;
}
int main()
{
    int n;
    cout << "Enter the number of students : ";
    cin >> n;
    Marks m[n];
    PHYSICS P[n];
    MATHS M[n];
    CHEMISTRY C[n];

    for (int i = 0; i < n; i++)
    {
        m[i].setData();
        P[i].setPhy();
        C[i].setChe();
        M[i].setMaths();
    }
    for (int i = 0; i < n; i++)
    {
        m[i].displayData();
        cout << "Phy: " << P[i].getPhy() << "\t\t"
             << "Che: " << C[i].getChe() << "\t\t"
             << "Math: " << M[i].getMaths() << endl;
        avgMarks(M[i], C[i], P[i]);
    }
    return 0;
}