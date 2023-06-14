/*Design three classes STUDENT, EXAM and RESULT. The STUDENT class has data 
members such as rollno, name. EXAM is created by inheriting STUDENT. EXAM class adds 
data members representing the marks scored in six subjects. Derive RESULT from EXAM 
and has its own data members such as totalmarks. Write a program to model this relationship. */

#include<iostream>
#include<string.h>
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
        void show_detail()
        {
            cout<<"\n"<<roll_no<<"\t"<<name<<endl;
        }
};
class Exam : protected Student
{
    protected:
        int marks[6];
    public:
        Exam() : Student()
        {
            for(int i=0; i<6; i++)
                marks[i] = 0;
        }
        Exam(int r, string n, int *m) : Student(r, n)
        {
            for(int i=0; i<6; i++)
            {
                marks[i] = m[i];
            }            
        }
        void show_detail()
        {
            Student :: show_detail();
            cout<<"Marks of all subjects are as following ..."<<endl;
            for(int i=0; i<6; i++)
            {
                cout << marks[i] <<"\t";
            }
        }
};
class Result : protected Exam
{
    protected:
        int totalMarks = 0;
    public:
        Result(){ totalMarks = 0; }
        Result(int r, string n, int* m) : Exam(r, n, m) {}
        void find_total()
        {
            for(int i=0; i<6; i++)
            {
                totalMarks = totalMarks + marks[i];
            }
        }
        void show_detail()
        {
            Exam :: show_detail();
            cout<<"\nTotal Marks = "<<totalMarks<<endl;
        }
};
int main()
{
    int r;
    int m[6];
    string n;

    cout<<"Enter the Roll no of the student : ";
    cin>>r;
    cout<<"Enter the Name of the student : ";
    fflush(stdin);
    getline(cin, n);
    for(int i=0; i<6; i++)
    {
        cout<<"Enter the Marks of subject "<<i+1<<" : ";
        cin>>m[i];
    }    

    Result res(r, n, m);
    res.find_total();
    res.show_detail();
    return 0;
}