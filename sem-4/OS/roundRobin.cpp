#include <iostream>
using namespace std;

class process
{
private:
    int AT[10], BT[10], WT[10], PID[10];
    int time_quantum, totalProcess;

public:
    void setter()
    {
        cout << "Enter total no of processes : ";
        cin >> totalProcess;
        cout << "Enter the time quantum : ";
        cin >> time_quantum;
        for (int i = 0; i < totalProcess; i++)
        {
            PID[i] = i;
            cout << "Enter Arrival Time : ";
            cin >> AT[i];
            cout << "Enter Burst Time : ";
            cin >> BT[i];
        }
    }
    void sortWithArrival()
    {
        for (int i = 0; i < totalProcess - 1; i++)
        {
            for (int j = 0; j < totalProcess - i - 1; j++)
            {
                if (AT[j] > AT[j + 1])
                {
                    int tempAt = AT[j];
                    AT[j] = AT[j + 1];
                    AT[j + 1] = tempAt;

                    int tempId = PID[j];
                    PID[j] = PID[j + 1];
                    PID[j + 1] = tempId;

                    int tempBt = BT[j];
                    BT[j] = BT[j + 1];
                    BT[j + 1] = tempBt;
                }
            }
        }
    }
    void algo()
    {
        bool isCompleted;
        while(isCompleted != true)
        {
            
        }
    }
};
int main()
{

    return 0;
}