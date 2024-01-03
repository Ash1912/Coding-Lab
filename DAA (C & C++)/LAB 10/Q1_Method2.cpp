// WAP a generalized algorithm that finds the shortest path 
// in a directed as well as undirected graph.
#include <bits/stdc++.h>
#include <chrono>  
using namespace std;
using namespace std::chrono; 


#define V 9
#define inf numeric_limits<int>::max();
int minDistance(int dist[], bool sptSet[])
{
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}
void dijkstra(int graph[V][V], int src, int dest)
{
    int dist[V];

    bool sptSet[V];
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;
    dist[src] = 0;

    for (int count = 0; count < V - 1; count++)
    {

        int u = minDistance(dist, sptSet);
        sptSet[u] = true;

        for (int v = 0; v < V; v++)
        {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
        }
    }
    if (dist[dest] != INT_MAX)
    {
        cout << "The shortest distance between " << (char)(src+'a') << " to " <<(char) (dest+'a') << " is " << dist[dest] << endl;
    }
    else
        cout << "No such path exists";
}
int main()
{
    auto start = high_resolution_clock::now();
    int graph[V][V] = {{0, 2, 3, 0, 0},
                       {0, 0, 1, 0, 0},
                       {3, 1, 0, 0, 0},
                       {0, 0, 0, 0, 1},
                       {0, 0, 0, 1, 0}};

    char src,dest;
    cin>>src>>dest;
    dijkstra(graph, src-'a', dest-'a');
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\nTime: " << duration.count() << " microseconds "<< endl;
    cout << "Ashish_20051685" << endl;
   return 0;
}