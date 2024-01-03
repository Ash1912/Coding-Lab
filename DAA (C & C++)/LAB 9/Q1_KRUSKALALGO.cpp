//Write a program to find minimum spanning tree using Kruskal's Algorithm.
// Kruskal's algorithm in C
//                                     5
//                                A--------E
//                              / | \     /
//                            1/  |7 \10 /2
//                            /   |   \ /
//                            B---C----D
//                              3    4
#include <iostream>    
#include <algorithm>
#include <chrono>    
using namespace std; 
using namespace std::chrono;   
const int MAX = 1e4 + 5;    
int id[MAX], vertex, edges;    
pair <long long, pair<int, int> > p[MAX];    
void init()    
{    
    for(int i = 0;i < MAX;++i)    
        id[i] = i;    
}      
int root(int x)    
{    
    while(id[x] != x)    
    {    
        id[x] = id[id[x]];    
        x = id[x];    
    }    
    return x;    
}      
void union1(int x, int y)    
{    
    int p = root(x);    
    int q = root(y);    
    id[p] = id[q];    
}     
long long kruskal(pair<long long, pair<int, int> > p[])    
{    
    int x, y;    
    long long cost, minimumCost = 0;    
    for(int i = 0;i < edges;++i)    
    {    
        x = p[i].second.first;    
        y = p[i].second.second;    
        cost = p[i].first;    
        if(root(x) != root(y))    
        {    
            minimumCost += cost;    
            union1(x, y);    
        }        
    }    
    return minimumCost;    
}     
int main()    
{   
    auto start = high_resolution_clock::now();
    int x, y;   
    long long weight, cost, minimumCost;    
    init();    
    cout <<"Enter Vertex and Edges :";    
    cin >> vertex >> edges;    
    for(int i = 0;i < edges;++i)    
    {    
        cout<<"Enter the value of Vertex(X), Vertex(Y) and their Weight :";    
    cin >> x >> y >> weight;    
        p[i] = make_pair(weight, make_pair(x, y));    
    }    
    sort(p, p + edges);    
    minimumCost = kruskal(p);    
    cout <<"Minimum cost is "<< minimumCost << endl;  
    cout<<"\n";
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\nTime: " << duration.count() << " microseconds "<< endl;
    cout << "Ashish_20051685" << endl; 
    return 0;    
}     

//MST-KRUSKAL(G,W)
//1. A->{ }
//2. for each vertex v belongs V[G]
//        do MAKE-SET(v)
//3. sort the edges of E into increasing order by weight w.
//4. for each edge (u,v) belongs to E taken in increasing order.
//    do if FIND-SET (u) != FIND-SET (v)
//        then A <- A U {u, v}
//          UNION (u, v)
//5. return A.

// Enter Vertex and Edges :5 7
// Enter the value of Vertex(X), Vertex(Y) and their Weight :1 2 1
// Enter the value of Vertex(X), Vertex(Y) and their Weight :1 3 7
// Enter the value of Vertex(X), Vertex(Y) and their Weight :1 4 10
// Enter the value of Vertex(X), Vertex(Y) and their Weight :1 5 5
// Enter the value of Vertex(X), Vertex(Y) and their Weight :2 3 3
// Enter the value of Vertex(X), Vertex(Y) and their Weight :3 4 4
// Enter the value of Vertex(X), Vertex(Y) and their Weight :4 5 2
// Minimum cost is 10


// Time: 31382153 microseconds
// Ashish_20051685



