#include <stdio.h>

struct Process
{
    int arrivalTime;
    int burstTime;
    int waitingTime;
    int turnaroundTime;
};

void swap(int *x, int *y)
{
    int c = *x;
    *x = *y;
    *y = c;
}

void sort(struct Process *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (p[i].arrivalTime > p[j].arrivalTime)
            {
                swap(&p[i].arrivalTime, &p[j].arrivalTime);
                swap(&p[i].burstTime, &p[j].burstTime);
            }
        }
    }
}

float calWaitingTime(struct Process *p, int n)
{
    int temp[n];
    temp[0] = 0;
    float totalWT = 0;
    for (int i = 0; i < n; i++)
    {
        p[i].waitingTime = 0;
        p[i].turnaroundTime = 0;
        temp[i + 1] = temp[i] + p[i].burstTime;
        p[i].waitingTime = temp[i] - p[i].arrivalTime;
        totalWT = totalWT + p[i].waitingTime;
    }
    return totalWT;
}

float calTurnAroundTime(struct Process *p, int n)
{
    float totalTAT = 0;
    for (int i = 0; i < n; i++)
    {
        p[i].turnaroundTime = p[i].waitingTime + p[i].burstTime;
        totalTAT = totalTAT + p[i].turnaroundTime;
    }
    return totalTAT;
}

void calAverage(float *tat, float *wt, int n)
{
    *tat = *tat / n;
    *wt = *wt / n;
}

int main()
{
    int noOfProcesses;
    printf("Enter number of processes: ");
    scanf("%d", &noOfProcesses);
    struct Process p[noOfProcesses];

    printf("Enter arrival time of all processes: ");
    for (int i = 0; i < noOfProcesses; i++)
    {
        scanf("%d", &p[i].arrivalTime);
    }

    printf("Enter burst time of all processes: ");
    for (int i = 0; i < noOfProcesses; i++)
    {
        scanf("%d", &p[i].burstTime);
    }

    sort(p, noOfProcesses);

    float totalWT = calWaitingTime(p, noOfProcesses);
    float totalTAT = calTurnAroundTime(p, noOfProcesses);

    calAverage(&totalTAT, &totalWT, noOfProcesses);

    printf("\n\n\tProcess ID\tArrival Time\tBurst Time\tWaiting Time\tTurnAround Time");
    for (int i = 0; i < noOfProcesses; i++)
    {
        printf("\n\t  %d\t\t  %d\t\t  %d\t\t  %d\t\t  %d", i, p[i].arrivalTime, p[i].burstTime, p[i].waitingTime, p[i].turnaroundTime);
    }

    printf("\n\nThe average waiting time using FIFO CPU Scheduling Algorithm is: %f", totalWT);
    printf("\nThe average turnaround time using FIFO CPU Scheduling Algorithm is:  %f", totalTAT);
    return 0;
}