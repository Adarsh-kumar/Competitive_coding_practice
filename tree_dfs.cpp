#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> dfs_vector;
vector<int> node_vector;

vector<int> dfs(vector<int> *list,int node,int parent)
{
dfs_vector.push_back(node);

for(int i=0;i<list[node].size();i++)
{
if(list[node][i]!=parent)
dfs(list,list[node][i],node);
}

return (dfs_vector);
}

int dfs_counter(vector<int> *list,int node,int parent)
{
node_vector.push_back(node);

for(int i=0;i<list[node].size();i++)
{
if(list[node][i]!=parent)
dfs_counter(list,list[node][i],node);
}

return (node_vector.size());
}


int main()
{
int n;
cin>>n;

vector<int> list[n+1];
int u,v;

for(int i=0;i<n-1;i++)
{
cin>>u>>v;
list[u].push_back(v);
list[v].push_back(u);
}

vector<int> vv;

vv=dfs(list,1,0);

/*for(int i=0;i<vv.size();i++)
{
//cout<<vv[i]<<" 
}
vector<int> aa;
//cout<<dfs_counter(list,1,0,aa);

*/

cout<<dfs_counter(list,1,0);

return 0;
}

