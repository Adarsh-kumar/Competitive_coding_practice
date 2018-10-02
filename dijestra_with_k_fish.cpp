#include<bits/stdc++.h>
using namespace std;

class graph
{
int no_of_vertices;
vector<int> *adj;
vector<int> *fishes;
public:
graph(int v);
void add_edge(int u,int v);
int dijestra(int s);
};

graph::graph(int v)
{
this->no_of_vertices=v;
this->adj=new vector<int>[v];
}

void graph::add_edge(int u,int v)
{
adj[u].push_back(v);
adj[v].push_back(u);
}

int graph::dijestra(int v)
{



int main()
{
int n,m,k,t;
cin>>n>>m>>k;
for(int i=0;i<n;i++)
{
int types;
cin>>types;
for(int i=0;i<types;i++)
{
v
