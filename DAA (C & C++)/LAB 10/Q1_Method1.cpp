//Write a program to Implement Single source Shortest path algorithm in a Graph.
#include <bits/stdc++.h>
#include <chrono>  
using namespace std;
using namespace std::chrono; 
#define INF 0x3f3f3f3f

typedef pair<int, int> iPair;

class Graph {
	int V;
	list<pair<int, int> >* adj;

public:
	Graph(int V);
	void addEdge(int u, int v, int w);
	void shortestPath(int s);
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<iPair>[V];
}

void Graph::addEdge(int u, int v, int w)
{
	adj[u].push_back(make_pair(v, w));
	//adj[v].push_back(make_pair(u, w));
}
void Graph::shortestPath(int src)
{
	priority_queue<iPair, vector<iPair>, greater<iPair> >
		pq;

	vector<int> dist(V, INF);

	pq.push(make_pair(0, src));
	dist[src] = 0;

	while (!pq.empty()) {
		int u = pq.top().second;
		pq.pop();

		list<pair<int, int> >::iterator i;
		for (i = adj[u].begin(); i != adj[u].end(); ++i) {

			int v = (*i).first;
			int weight = (*i).second;
    if(v && weight)
    {
			if (dist[v] > dist[u] + weight) {
				dist[v] = dist[u] + weight;
				pq.push(make_pair(dist[v], v));
			}
    }
		}
	}

	printf("Vertex Distance from Source\n");
	for (int i = 0; i < V; ++i)
    if(dist[i]!=INF)
    {printf("%d \t\t %d\n", i, dist[i]);}
    else
    printf("%d \t\t NOPATH\n", i);
}

int main()
{
    auto start = high_resolution_clock::now();
	int V = 11;
	Graph g(V);

	// g.addEdge(0, 1, 4);
	// g.addEdge(0, 7, 8);
	// g.addEdge(1, 2, 8);
	// g.addEdge(1, 7, 11);
	// g.addEdge(2, 3, 7);
	// g.addEdge(2, 8, 2);
	// g.addEdge(2, 5, 4);
	// g.addEdge(3, 4, 9);
	// g.addEdge(3, 5, 14);
	// g.addEdge(4, 5, 10);
	// g.addEdge(5, 6, 2);
	// g.addEdge(6, 7, 1);
	// g.addEdge(6, 8, 6);
	// g.addEdge(7, 8, 7);

  g.addEdge(1,0,5);
  g.addEdge(0,3,6);
  g.addEdge(0,5,7);
  g.addEdge(1,2,3);
  g.addEdge(2,1,3);
  g.addEdge(2,3,6);
  g.addEdge(3,2,6);
  g.addEdge(2,4,9);
  g.addEdge(4,2,9);
  g.addEdge(3,4,5);
  g.addEdge(4,5,7);
  g.addEdge(5,4,7);
  g.addEdge(1,0,5);
  //---------------------------
  g.addEdge(6, 10, 5);
  g.addEdge(6,7,7);
  g.addEdge(7,6,7);
  g.addEdge(9,6,4);
  g.addEdge(8,10,6);
  g.addEdge(7,8,3);
  g.addEdge(8,7,3);
	g.shortestPath(0);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\nTime: " << duration.count() << " microseconds "<< endl;
    cout << "Ashish_20051685" << endl; 
	return 0;
}