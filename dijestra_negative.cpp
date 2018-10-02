#include<iostream>
#include<bits/stdc++.h>
# define INF 0x3f3f3f3f
//dijestra with negative weight 
// here we can see that that multiple times push pop is  being done and there is no constant time upper bound of dijestra in such case 
using namespace std;

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
    return(lhs.weight< rhs.weight);
  }
};

bool operator>(const node& a, const node& b) {
  return a.weight > b.weight;
}
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
    void shortestPathbellman_ford(int V,int edges_no,edge_with_weight a[]);
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
vector<int> graph::shortestPath(int V,int d)
{
//a function to return the path from source to each destination 
// apply dijestra for each destination
std::priority_queue<node,vector<node>,greater<node>> sptset;

vector<int> dist(V,INF);

dist[0]=0;

sptset.push({0,0});

while(!sptset.empty())
{
node temp=(sptset.top());
sptset.pop();


int u=temp.v;
cout<<u<<" it has been poped"<<endl;
for(list<node>::iterator itr=adj[u].begin();itr!=adj[u].end();itr++)
{
    int v=(*itr).v;
    int weight=(*itr).weight;
if(dist[v]>dist[u]+weight)
{
//if(dist[v]!=INF)
//sptset.erase(sptset.find({v,dist[v]}));

dist[v]=dist[u]+weight;
sptset.push({v,dist[v]});
cout<<v<<" it has been pushed"<<endl;
}
}
}

return dist;
}
 
void graph::shortestPathbellman_ford(int v,int edge_no,edge_with_weight edges[])
{
int dp[v];
dp[0]=0;
    for(int j=1;j<v;j++)
        dp[j]=INF;
//a dynamic programming algorithm
for(int i=1;i<=v-1;i++)
{
for(int e=0;e<edge_no;e++)
{
int src=edges[e].src;
int dest=edges[e].dest;
int weight=edges[e].weight;
if(dp[src]!=INF && dp[dest]>dp[src]+weight)
dp[dest]=dp[src]+weight;
}
}
for(int j=0;j<v;j++)
        cout<<" "<<dp[j]<<" ";

}

int main()
{
int V2=5;

    edge_with_weight edges2[]={{0,1,-1},{0,2,4},{1,2,3},{1,3,2},{1,4,2},{3,2,5},{3,1,1},{4,3,-3}};
    graph g2=build_the_graph2(V2,edges2,8);
cout<<"graph built"<<endl;
vector<int> ans=g2.shortestPath(V2,3);
for(int i=0;i<ans.size();i++)
    cout<<" "<<ans[i]<<"  ";
    
    cout<<endl;
g2.shortestPathbellman_ford(5,8,edges2);

   // int E = 7;
 
   /* int minEdgeToReverse =
                  minimum_number_of_reversal(edges, E, V, 0, 6);
    if (minEdgeToReverse != -1)
        cout << minEdgeToReverse << endl;
    else
        cout << "Not possible" << endl;*/
    return 0;
}
