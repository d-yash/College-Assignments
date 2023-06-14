#include<iostream>
using namespace std;

class PriorityQueue
{
    int pq[20]; 
    int front, rear, n = 0;
    public:
        PriorityQueue()
        {
            n = front = rear = -1;
        }
        PriorityQueue(int n)
        {
            this->n = n;
            front = rear = -1;
        }
        void insert(int value)
        {
            if(rear > n)
            {
                cout<<"\nQueue Overflow!"<<endl;
                return;
            }
            if(front == -1)
                front = 0;
            else
            {
                for(int i=front; i<rear; )
                {
                    if(value >= pq[i])
                    {
                        i++;
                    }
                    else
                    {
                        
                    }
                }
            }
        }
};
int main()
{
    
    return 0;
}