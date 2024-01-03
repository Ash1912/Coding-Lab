//Write a program to find minimum spanning tree using Dijkstra's Algorithm.
#include <bits/stdc++.h> 
#include <chrono> 
using namespace std; 
#define V 4
using namespace std::chrono; 
vector<int> djikstra(int graph[V][V],int src) 
{ 

	vector<int> dist(V,INT_MAX);
	dist[src]=0;
	vector<bool> fin(V,false);

	for (int count = 0; count < V-1 ; count++) 
	{ 
		int u = -1; 

		for(int i=0;i<V;i++)
		    if(!fin[i]&&(u==-1||dist[i]<dist[u]))
		        u=i;
		fin[u] = true; 
		
		for (int v = 0; v < V; v++) 

			if (graph[u][v]!=0 && fin[v] == false) 
				dist[v] = min(dist[v],dist[u]+graph[u][v]); 
	} 
    return dist;
} 

int main() 
{ 
    int cost=0;
    auto start = high_resolution_clock::now();
	int graph[V][V] = { { 0, 50, 100, 0}, 
						{ 50, 0, 30, 200 }, 
						{ 100, 30, 0, 20 }, 
						{ 0, 200, 20, 0 },}; 

	for(int x: djikstra(graph,0)){
	    cout<<x<<" "<<endl;
        cost=cost+x;
	}
    cout<<"Minimum cost :"<<cost<<endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\nTime: " << duration.count() << " microseconds "<< endl;
    cout << "Ashish_20051685" << endl; 
	return 0;
}