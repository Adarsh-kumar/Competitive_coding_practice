#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class graph
{
int v;
list<int> *adj;
public:
graph(int v);
void add_edge(int u,int v);
int dfs_counter(int u);
vector<int> dfs(int s);
}

graph::graph(int v)
{
this->v=v;
this->adj=new list<int> [v];
}

vector<int> graph::dfs(int s)
{
stack<int> q;
q.push(s);
vector<int> parent(this->no_of_vertices);
vector<int> dfs_vector;
vector<int>::iterator it;
bool visited[t];
for(int i=0;i<t;i++)
{
visited[i]=0;
}
while(!q.empty())
{
int u=q.top();
dfs_vector.push_back(u);
visited[u]=1;

for(it=this->adj[u].begin();it!=this->adj[u].end();it++)
{
int v=*it;
if(!visited[v])
{
q.push(v);
parent[v]=u;
visited[v]=1;
}
}
q.pop();
}

return dfs_vector;
}



void graph::add_edge(int u,int v)
{
this->adj[u].push_back(v);
}


int dfs_counter(int s)
{
stack<int> q;
q.push(s);
vector<int> parent(this->no_of_vertices);
vector<int> dfs_vector;
vector<int>::iterator it;
bool visited[t];
for(int i=0;i<t;i++)
{
visited[i]=0;
}
while(!q.empty())
{
int u=q.top();
dfs_vector.push_back(u);
visited[u]=1;

for(it=this->adj[u].begin();it!=this->adj[u].end();it++)
{
int v=*it;
if(!visited[v])
{
q.push(v);
parent[v]=u;
visited[v]=1;
}
}
q.pop();
}

return dfs_vector.size();
}

int main()
{
int n,u,v;
cin>>n;
graph g(n);
for(int i=0;i<n-1;i++)
{
cin>>u>>v;
g.add_edge(u-1,v-1);
}
vector<int> v= g.dfs(0);

for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";

return 0;
}



