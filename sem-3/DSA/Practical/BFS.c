#include <stdio.h>
#define max 8
#define size 10

int n, adj[max][max], mark[10];

struct queue
{
    int item[size];
    int front, rear;
} q;

void initialize(struct queue *q)
{
    q->front = q->rear = 0;
}

void enqueue(struct queue *q, int y)
{
    if (q->rear >= size - 1)
    {
        printf("Queue Overflow Occured!!\n");
        return -1;
    }
    else
    {
        q->rear++;
        q->item[q->rear] = y;
        if (q->front == 0)
        {
            q->front = 1;
        }
    }
}

int dequeue(struct queue *q)
{
    if (q->front == 0 && q->rear == 0)
    {
        printf("Queue Underflow Occured!!\n");
        return -1;
    }
    else
    {
        int temp = q->item[q->front];
        if (q->front == q->rear)
        {
            q->front = q->rear = 0;
        }
        else
        {
            q->front++;
        }
        return temp;
    }
}
void bfs(int node)
{
    mark[node] = 1;
    enqueue(&q, node);
    while(q.front!=0 && q.rear!=0)
    {
        int u = dequeue(&q);
        printf("%d\n",u);
        for(int j=0; j<n; j++)
        {
            if(adj[u][j] == 1 && mark[j] == 0)
            {
                mark[j] = 1;
                enqueue(&q, j);
            }
        }
    }
}
int main()
{
    initialize(&q);
    printf("\nEnter the number of vertices : ");
    scanf("%d", &n);

    printf("\nEnter the adjacency matrix...\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&adj[i][j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        mark[i] = 0;
    }
    printf("\nTHE BFS traversal of the graph...\n");
    bfs(0);
    return 0;
}