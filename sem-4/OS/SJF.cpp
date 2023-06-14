#include <iostream>
using namespace std;

class process
{
    int n = 5, processId[5], arrivalTime[5], burstTime[5], turnAroundTime[5], waitTime[5];

public:
    void setProcess()
    {
        system("CLS");
        // cout<<"Enter the no. of processes : ";
        // cin>>n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the process ID : ";
            cin >> processId[i];
            cout << "Enter the arrival Time : ";
            cin >> arrivalTime[i];
            cout << "Enter the Burst Time : ";
            cin >> burstTime[i];
        }
    }
    void sortWithArrival()
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arrivalTime[j] > arrivalTime[j + 1])
                {
                    int tempAt = arrivalTime[j];
                    arrivalTime[j] = arrivalTime[j + 1];
                    arrivalTime[j + 1] = tempAt;

                    int tempId = processId[j];
                    processId[j] = processId[j + 1];
                    processId[j + 1] = tempId;

                    int tempBt = burstTime[j];
                    burstTime[j] = burstTime[j + 1];
                    burstTime[j + 1] = tempBt;

                    // int tempId = processId[j];
                    // processId[j] = processId[j+1];
                    // processId[j+1] = tempId;
                }
            }
        }
    }
    void printProcess()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "PID : " << processId[i] << endl;
            cout << "AT : " << arrivalTime[i] << endl;
            cout << "BT : " << burstTime[i] << endl;
            cout << "WT : " << waitTime[i] << endl;
            cout << "TT : " << turnAroundTime[i] << endl;
            cout << "-----------------------------------\n"
                 << endl;
        }
    }
    void calcTurnAroundTime()
    {
        turnAroundTime[0] = burstTime[0];
        for (int i = 1; i < n; i++)
        {
            if (i == 1)
                turnAroundTime[i] = burstTime[i - 1] + burstTime[i];
            else
                turnAroundTime[i] = turnAroundTime[i - 1] + burstTime[i];
        }
    }
    void calcWaitTime()
    {
        int sumWait = 0;
        for (int i = 0; i < n; i++)
        {
            waitTime[i] = turnAroundTime[i] - burstTime[i];
            // cout<<i+1<<" "<<turnAroundTime[i]<<" - "<<burstTime[i]<<" = "<<waitTime[i]<<endl;
            sumWait += waitTime[i];
        }
        cout << "\nAverage of Wait time : " << ((double)sumWait) / 5 << endl;
    }
};
int main()
{
    process p;
    p.setProcess();
    // p.printProcess();
    p.sortWithArrival();
    cout << "\n\nAfter Sorting..\n"
         << endl;
    p.calcTurnAroundTime();
    p.calcWaitTime();
    p.printProcess();
    return 0;
}