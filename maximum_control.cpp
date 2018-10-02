#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class graph
{
int vertices,connection;
list<int> *adj;
public:
graph(int n);
void add_edge(int u,int v);
}

graph::graph(int n)
{
this->vertices=n;
this->adj=new list<int> [n];
}

graph::add_edge(int u,int v)
{
this->adj[u].push_back(v);
this->adj[v].push_back(u);
}

int main()
{
int n;
cin>>n;
graph g(n);
for(int i=0;i<n;i++)
{
cin>>i>>j;
g.add_edge(i,j);
}

