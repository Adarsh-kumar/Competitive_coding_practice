#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> > adj[100005];


set<int> ans;

bool visited[100005];

void dfs(int u,int &prev)
{
visited[u]=1;
for(pair<int,int> v:adj[u])
{
if(!visited[v.first])
{
if(v.second==2)
prev=v.first;
dfs(v.first,prev);
}
}

if(prev!=0)
ans.insert(prev);

prev=0;
}



int main()
{
int n;

cin>>n;

for(int i=0;i<n-1;i++)
{
int u,v,c;
cin>>u>>v>>c;
adj[u].push_back(make_pair(v,c));
adj[v].push_back(make_pair(u,c));
}

int start=0;
dfs(1,start);

cout<<ans.size()<<endl;

for(auto it=ans.begin();it!=ans.end();it++)
cout<<*it<<" ";


return 0;
}




