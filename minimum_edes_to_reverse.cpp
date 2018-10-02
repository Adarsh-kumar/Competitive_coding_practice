#include<iostream>
#include<bits/stdc++.h>
# define INF 0x3f3f3f3f

using namespace std;


typedef struct edge 
{
int src;
int dest;
}edge;

typedef struct edge_with_weight
{
int src;
int dest;
int weight;
}edge_with_weight;

typedef struct  node
{
int v;
int weight;
}node;


struct less_element
{
bool operator()(const node& lhs, const node& rhs) const
  {
    return lhs.weight< rhs.weight;
  }
};


class graph
{
int nodes;

list<node> *adj;

public:
    graph(int V);  // Constructor
 
    // function to add an edge to graph
    void addEdge(int u, int v, int w);
 
    // returns shortest path from s
    vector<int> shortestPath(int V,int s);
};

graph::graph(int v)
{
this->nodes=v;
this->adj=new list<node> [v];
}

void graph::addEdge(int u,int v,int w)
{
this->adj[u].push_back({v,w});
}



graph build_the_graph2(int V,edge_with_weight edges[],int n)
{
//g is an object of graph class
graph g(V);


for(int i=0;i<n;i++)
{
g.addEdge(edges[i].src,edges[i].dest,edges[i].weight);
//g.addEdge(edges[i].dest,edges[i].src,1);

}
return g;
}

graph build_the_graph(int V,edge edges[],int n)
{
//g is an object of graph class
graph g(V);


for(int i=0;i<n;i++)
{
g.addEdge(edges[i].src,edges[i].dest,0);
g.addEdge(edges[i].dest,edges[i].src,1);

}
return g;
}

vector<int> graph::shortestPath(int V,int d)
{
//a function to return the path from source to each destination 
// apply dijestra for each destination
set<node,less_element> sptset;

vector<int> dist(V,INF);

dist[0]=0;

sptset.insert({0,0});

while(!sptset.empty())
{
node temp=*(sptset.begin());
sptset.erase(sptset.begin());


int u=temp.v;
cout<<u<<" it has been poped"<<endl;
for(list<node>::iterator itr=adj[u].begin();itr!=adj[u].end();itr++)
{
    int v=(*itr).v;
    int weight=(*itr).weight;
if(dist[v]>dist[u]+weight)
{
if(dist[v]!=INF)
sptset.erase(sptset.find({v,weight}));

dist[v]=dist[u]+weight;
sptset.insert({v,weight});
cout<<v<<" it has been pushed"<<endl;
}
}
}

return dist;
}

int minimum_number_of_reversal(edge edges[],int E,int V,int s ,int d)
{
graph g=build_the_graph(V,edges,E);

vector<int> ans=g.shortestPath(V,d);

if(ans[d]!=INF)
return ans[d];

else
return -80;
}





int main()
{
    int V = 7;
int V2=4;
    edge edges[] = {{0,1},{2, 1}, {2, 3}, {5, 1},
                     {4, 5}, {6, 4}, {6, 3}};

    edge_with_weight edges2[]={{0,1,2},{1,2,1},{0,2,0},{0,3,1},{3,1,0}};
    graph g2=build_the_graph2(V2,edges2,5);
cout<<"graph built"<<endl;
vector<int> ans=g2.shortestPath(V,3);
//for(int i=0;i<ans.size();i++)
//cout<<ans[i]<<"  ";
   // int E = 7;
 
   /* int minEdgeToReverse =
                  minimum_number_of_reversal(edges, E, V, 0, 6);
    if (minEdgeToReverse != -1)
        cout << minEdgeToReverse << endl;
    else
        cout << "Not possible" << endl;*/
    return 0;
}
