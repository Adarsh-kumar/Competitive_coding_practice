#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100005];

int count1=0;
int count2=0;

int col[100005];

bool check_bipartite(int s)
{
queue<int> q;
q.push(s);

col[s]=1;

count1++;

while(!q.empty())
{
int u=q.front();
q.pop();

for(int v:adj[u])
{
if(col[v]==-1)
{
col[v]=1-col[u];
q.push(v);
if(col[v]==1)
count1++;
else
count2++;
}
else if(col[v]==col[u])
return 0;

}


}

return 1;
}


int main()
{
int n,m;
cin>>n>>m;

memset(col,-1,sizeof(col));

for(int i=0;i<m;i++)
{
int u,v;
cin>>u>>v;

adj[u].push_back(v);
adj[v].push_back(u);
}

if(!check_bipartite(1))
cout<<-1<<endl;

else
{
cout<<count1<<endl;
for(int i=1;i<=n;i++)
{
if(col[i]==1)
cout<<i<<" ";
}

cout<<endl;
cout<<count2<<endl;
for(int i=1;i<=n;i++)
{
if(col[i]==0)
cout<<i<<" ";
}

}

return 0;
}

