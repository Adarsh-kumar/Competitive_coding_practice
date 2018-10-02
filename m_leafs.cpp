#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
bool visited[100005];

int cats_count[100005];

int parent[100005];
int cats[100005];

int m;

void dfs(int u,int &count)
{
visited[u]=1;

if(adj[u].size()==0)
{
if(cats_count[u]<=m)
count++;
}

for(int e:adj[u])
{
if(!visited[e])
{
parent[e]=u;
if(cats[u]==1)
cats_count[e]=cats_count[u]+cats[e];
else
{
if(cats_count[u]>m)
cats_count[e]=max(cats_count[u],cats[e]);
else
cats_count[e]=cats[e];
}

dfs(e,count);
}

}

}

int main()
{
int n;

cin>>n>>m;


for(int i=0;i<n;i++)
cin>>cats[i+1];

for(int i=0;i<n-1;i++)
{
int u,v;
cin>>u>>v;
adj[u].push_back(v);
adj[v].push_back(u);
}


int count=0;
cats_count[1]=cats[1];
dfs(1,count);

cout<<count<<endl;
return 0;
}

