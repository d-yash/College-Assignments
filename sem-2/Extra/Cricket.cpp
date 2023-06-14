#include<iostream>
using namespace std;

/*A Cricket team has the table of batting figures for a series of test matches. Write a program to read the dataname,
runs , innings , times not out into a class object and calculate the batting average , also display the result in the
 format as given below :
---------------------------------------------------------------------------------------------------------------
Player's name Runs Innings Times Not Out
Batting Average
----------------------------------------------------------------------------------------------------------------
Tendulkar 632 15 0
Azharuddin 524 16 2
------------------------------------------------------------------------------------------------------------------*/
class cricket
{
    string name;
    int run, totalInnings, totalNotOut;
    double avg;
    public: 
        void setData()
        {
            cout<<"Enter the name of the player : ";
            cin>>name;
            cout<<"Enter total runs was scored by "<<name<<" : ";
            cin>>run;
            cout<<"Enter Total number of Innings was played by "<<name<<" : ";
            cin>>totalInnings;
            cout<<"Howmany times did "<<name<<" remaind notout : ";
            cin>>totalNotOut;
        }
        void findAvg()
        {
            avg = run/totalInnings-totalNotOut;
        }
        void printData()
        {
            cout<<"\n"<<name<<"\t"<<run<<"\t"<<totalInnings<<"\t"<<totalNotOut<<endl
                <<avg<<endl;
        }
};
int main()
{
    int n;
    cout<<"Howmany players detials you want to enter : ";
    cin>>n;

    cricket c[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter details of "<<i+1<<" player"<<endl;
        c[i].setData();
    }
    for(int i=0; i<n; i++)
    {
        c[i].findAvg();
        c[i].printData();   
    }
    
    return 0;
}