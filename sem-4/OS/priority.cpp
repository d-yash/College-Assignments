#include<iostream>
using namespace std;

class process
{
    public:
    int pId, arrivalTime, burstTime, priority, startTime, completionTime, turnAroundTime, waitingTime;

};
int main()
{
    int noOfProcesses; 
    double avgTT = 0, avgWT = 0, totalTT = 0, totalWT = 0, totalIdealTime = 0;
    int remaining_burstTime[noOfProcesses], isCompleted[noOfProcesses];
    cout<<"Enter the total number of processes : ";
    cin>>noOfProcesses;
    process p[noOfProcesses];

    for(int i=0; i<noOfProcesses; i++)
    {
        cout<<"Enter Arrival time : ";
        cin>>p[i].arrivalTime;
        cout<<"Enter Burst Time : ";
        cin>>p[i].burstTime;
        cout<<"Enter the Priority : ";
        cin>>p[i].priority;
        p[i].pId = i;
        remaining_burstTime[i] = p[i].burstTime;
        cout<<endl<<endl;
    }
    int idx, max;
    int currentTime = 0, completed = 0, prev = 0;
    while(completed != noOfProcesses)
    {
        idx = -1;
        max = -1;
        for(int i=0; i<noOfProcesses; i++)
        {
            if(p[i].arrivalTime <= currentTime && isCompleted[i] == 0)
            {
                if(p[i].priority > max)
                {
                    max = p[i].priority;
                    idx = i;
                }
                if(p[i].priority == max)
                {
                    if(p[i].arrivalTime < p[idx].arrivalTime)
                    {
                        max = p[i].priority;
                        idx = i;
                    }
                }
            }
        }
    }

    if(idx != -1)
    {
        if(remaining_burstTime[idx] == p[idx].burstTime)
        {
            p[idx].startTime = currentTime;
            totalIdealTime += p[idx].startTime - prev;
        }
        remaining_burstTime[idx] -= 1;
        currentTime++;
        prev = currentTime;

        if(remaining_burstTime[idx] == 0)
    }
    return 0;
}