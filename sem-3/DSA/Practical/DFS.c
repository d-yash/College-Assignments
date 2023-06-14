// #include <stdio.h>
// #define max 8
// int n, adj[max][max], mark[10];

// void dfs(int node)
// {
//     mark[node] = 1;
//     printf("%d\n",node);
//     for(int j=0; j<n; j++)
//     {
//         if(adj[node][j] == 1 && mark[node] == 0)
//         {
//             dfs(j);
//         }
//     }
// }
// int main()
// {
//     printf("\nEnter the number of vertices: ");
//     scanf("%d", &n);

//     printf("Enter the adjacency matrix for the graph: ");
//     for(int i=0; i<n;i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             scanf("%d", &adj[i][j]);
//         }
//     }

//     for(int i=0; i<n; i++)
//     {
//         mark[i] = 0;
//     }

//     printf("\nThe DFS traversal for the given graph is: \n");
//     dfs(0);
//     return 0;
// }





#include <stdio.h>
#define max 8
int n, adj[max][max], mark[10];

void dfs(int node)
{
    mark[node] = 1;
    printf("%d\n", node);
    for(int j=0; j<n; j++)
    {
        if(adj[node][j] == 1 && mark[j] == 0)
        {
            dfs(j);
        }
    }
}
int main()
{
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix for the graph: ");
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        mark[i] = 0;
    }

    printf("The dfs traversal for the given graph is: \n");
    dfs(0);
    return 0;
}