#include<bits/stdc++.h>
using namespace std;
vector<int> adj[105];
bool visited[105];
int n,m;
int ans=-1;


void dfs(int i)
{
visited[i]=1;
for(int j=0;j<adj[i].size();j++)
{
for(int k=2;i<=n;i++)
{
if(!visited[k]&&std::find(adj[k].begin(),adj[k].end(),adj[i][j])!=adj[k].end())
dfs(k);
}
}
ans++;
}




int main()
{
cin>>n>>m;
for(int i=0;i<n;i++)
{
int u;
cin>>u;

while(u--)
{
int temp;
cin>>temp;
adj[i].push_back(temp);
}

}
memset(visited,0,sizeof(visited));
dfs(1);
cout<<ans<<endl;

return 0;
}

