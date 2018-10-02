#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class graph
{
int no_of_vertices;
vector<int> *adj;
public:
graph(int v);
void addEdge(int u,int v);
vector<vector<int> > dfs(int s);
void ap_helper(bool visited[],int parent[],int low[],int disc[],bool ap[],int u);
void ap_finder();
void bridge_helper(bool visited[],int parent[],int low[],int disc[],vector<pair<int,int> > ap,int u);
void bridge_finder();
};

void graph::graph(int v)
{
this->no_of_vertices=v;
this->adj=new vector<int> [v];
}

void graph::addEdge(int u,int v)
{
this->adj[u].push_back(v);
this->adj[v].push_back(u);
}

void graph::bridge_helper(bool visited[],int parent[],int low[],int disc[],vector<pair<int,int> > ap,int u)
{
int children=0;
static int time=0;
vector<int>::iterator it;
adj=this->adj;
visited[u]=1;
disc[u]=low[u]=++time;

for(it=adj[u].begin();it!=adj[u].end();it++)
{
int v=*it;
if(!visited[v])
{
children++;
parent[v]=u;
ap_helper(visited,parent,low,disc,ap,v);

low[u]=min(low[u],low[v]);

if(parent[u]==-1 && children>=2)
ap.push_back(make_pair(u,v));

else if(parent[u]!=-1 && low[v]>=disc[u])
ap.push_back(make_pair(u,v));

}
else if(v!=parent[u])
low[u]=min(low[u],disc[v]);
}

}

void graph::bridge_finder()
{
int V=this->no_of_vertices;

bool *visited = new bool[V];
int *disc = new int[V];
int *low = new int[V];
int *parent = new int[V];
vector<pair<int ,int> > ap; // To store articulation points

    for (int i = 0; i < V; i++)
    {
        parent[i] = -1;
        visited[i] = false;
        //ap[i] = false;
    }

ap_helper(visited,parent,low,disc,ap,1);
for (int i = 0; i < ap.size(); i++)
        cout<<ap[i].first<<" "<<ap[i].second<<endl;

}

void graph::ap_helper(bool visited[],int parent[],int low[],int disc[],bool ap[],int u)
{
int children=0;
static int time=0;
vector<int>::iterator it;
adj=this->adj;
visited[u]=1;
disc[u]=low[u]=++time;

for(it=adj[u].begin();it!=adj[u].end();it++)
{
int v=*it;
if(!visited[v])
{
children++;
parent[v]=u;
ap_helper(visited,parent,low,disc,ap,v);

low[u]=min(low[u],low[v]);

if(parent[u]==-1 && children>=2)
ap[u]=1;

else if(parent[u]!=-1 && low[v]>=disc[u])
ap[u]=1;

}
else if(v!=parent[u])
low[u]=min(low[u],disc[v]);
}

}

void graph::ap_finder()
{
int V=this->no_of_vertices;

bool *visited = new bool[V];
int *disc = new int[V];
int *low = new int[V];
int *parent = new int[V];
bool *ap = new bool[V]; // To store articulation points

    for (int i = 0; i < V; i++)
    {
        parent[i] = -1;
        visited[i] = false;
        ap[i] = false;
    }

ap_helper(visited,parent,low,disc,ap,1);
for (int i = 0; i < V; i++)
        if (ap[i] == true)
            cout << i << " ";

}

int main()
{
    // Create graphs given in above diagrams
    cout << "\nArticulation points in first graph \n";
    graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 1);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    g1.ap_finder();


     cout << "\nArticulation points in second graph \n";
    graph g2(4);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
    g2.addEdge(2, 3);
    g2.ap_finder();

    cout << "\nArticulation points in third graph \n";
    graph g3(7);
    g3.addEdge(0, 1);
    g3.addEdge(1, 2);
    g3.addEdge(2, 0);
    g3.addEdge(1, 3);
    g3.addEdge(1, 4);
    g3.addEdge(1, 6);
    g3.addEdge(3, 5);
    g3.addEdge(4, 5);
    g3.bridge_finder();
return 0;
}
