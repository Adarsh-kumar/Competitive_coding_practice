#include<bits/stdc++.h>
using namespace std;

int get_bfs(vector<int> *adj,int u)
{
queue<int> q;
q.push(u);

int levels=0;

while(!q.empty())
{
int size=q.size();
while(size--)
{
int temp=q.front();
q.pop();
vector<int>::iterator it;
for(it=adj[temp].begin();it!=adj[temp].end();it++)
{
q.push(*it);
}
}
levels++;
}

return levels;
}





int main()
{
vector<int> adj[2001];


int ans=INT_MIN;
vector<int> roots;

int n;
cin>>n;

for(int i=0;i<n;i++)
{
int v;
cin>>v;

if(v!=-1)
adj[v].push_back(i+1);

else
roots.push_back(i+1);


for(int i=0;i<roots.size();i++)
{
ans=max(get_bfs(adj,roots[i]),ans);
}

}

cout<<ans<<endl;

return 0;
}


