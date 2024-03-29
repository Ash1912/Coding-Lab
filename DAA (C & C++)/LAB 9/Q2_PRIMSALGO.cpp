//Write a program to find minimum spanning tree using Prim's Algorithm.
        //    1
        //   /|\
        //  / | \
        // 0  |  3
        //  \ | /
        //   \|/
        //    2
#include <bits/stdc++.h> 
#include <chrono> 
using namespace std; 
#define V 4
using namespace std::chrono;  
int primMST(int graph[V][V]) 
{ 

	int key[V];int res=0; 
	fill(key,key+V,INT_MAX);
	bool mSet[V]; key[0]=0;

	for (int count = 0; count < V ; count++) //Vertex loop
	{ 
		int u = -1; 

		for(int i=0;i<V;i++)
		    if(!mSet[i]&&(u==-1||key[i]<key[u]))
		        u=i;
		mSet[u] = true; 
		res+=key[u];
		for (int v = 0; v < V; v++)  //Edges loop

			if (graph[u][v]!=0 && mSet[v] == false) 
				key[v] = min(key[v],graph[u][v]); 
	} 
    cout << "Minimum Cost :";
    return res;
} 

int main() 
{ 
    auto start = high_resolution_clock::now();
	int graph[V][V] = { { 0, 5, 8, 0}, 
						{ 5, 0, 10, 15 }, 
						{ 8, 10, 0, 20 }, 
						{ 0, 15, 20, 0 },}; 

	cout<<primMST(graph);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\nTime: " << duration.count() << " microseconds "<< endl;
    cout << "Ashish_20051685" << endl; 
	return 0;
}