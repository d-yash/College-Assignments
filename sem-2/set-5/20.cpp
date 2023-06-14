#include<iostream>
using namespace std;

/*Write a program to create a class TIME with members hours, minutes, and seconds. Read 
values from keyboard and add two TIME objects by passing objects to function and display 
result. Also define destructor.*/
class TIME
{
    int hr, min, sec;
    public:
        TIME(){}
        TIME(int h, int m, int s)
        {
           hr = h;
           min = m;
           sec = s;
        }
        int getHr()
        {
            return hr;
        }
        int getMin()
        {
            return min;
        }
        int getSec()
        {
            return sec;
        }
        ~TIME(){}
};
void addTime(TIME t1, TIME t2)
{
    cout<<"Total time is : "
        <<t1.getHr()+t2.getHr()<<" : "
        <<t1.getMin()+t2.getMin()<<" : "
        <<t1.getSec()+t2.getSec()<<endl;
}
int main()
{
    int h, m, s;
    cout<<"Enter time in formate of < hh:mm:ss > : ";
    cin>>h>>m>>s;
    TIME t1(h,m,s);
    cout<<"Enter time in formate of < hh:mm:ss > : ";
    cin>>h>>m>>s;
    TIME t2(h,m,s);
    // t1.getHr(); t1.getMin(); t1.getSec();
    // t2.getHr(); t2.getMin(); t2.getSec();
    addTime(t1 ,t2);
    return 0;
}