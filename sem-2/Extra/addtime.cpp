#include<iostream>
using namespace std;
class time
{
    int s,m,h,d=0;
    public: 
        time();
        time(int, int, int);
        void showTime();
        time addTime(time);
        ~time();
};
time :: time()
{
    s = 0;
    m = 0;
    h = 0;
} 
time :: time(int hour, int min, int sec)
{
    h = hour;
    m = min;
    s = sec;
}
time :: ~time(){}
void time :: showTime()
{
    cout<<d<<" days "<<h<<" hour "<<m<<" min "<<s<<" sec "<<endl;
}
time time :: addTime(time at)
{
    time t3;
    t3.s = this->s + at.s;
    t3.m = this->m + at.m;
    t3.h = this->h + at.h;
   
    t3.m += t3.s/60;
    t3.s = t3.s%60;
    t3.h += t3.m/60;
    t3.m = t3.m%60;
    t3.d += t3.h/24;
    t3.h = t3.h%24;
    return t3;
}
int main()
{
    int hour1,min1,sec1,hour2,min2,sec2;
    cout<<"Enter the value of the first time : ";
    cin>>hour1>>min1>>sec1;
    cout<<"Enter the value of the second time : ";
    cin>>hour2>>min2>>sec2;
    time t3;
    cout<<"----------------------------------"<<endl;
    time t1(hour1, min1, sec1);
    t1.showTime();
    cout<<"----------------------------------"<<endl;
    time t2(hour2, min2, sec2);
    t2.showTime();
    cout<<"----------------------------------"<<endl;
    t3 = t1.addTime(t2);
    cout<<"Total time is .....\n"<<endl;
    t3.showTime();
    return 0;
}