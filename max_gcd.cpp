#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100005];

int main()
{

map<int,int> my_map;

for(int i=2;i<100005;i++)
{
for(int j=i;j<100005;j+=i)
{
adj[j].push_back(i);
}
}

int n;

cin>>n;

int arr[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
}

int ans=0;

for(int i=0;i<n;i++)
{
for(int j=0;j<adj[arr[i]].size();j++)
{
my_map[adj[arr[i]][j]]++;
ans=max(my_map[adj[arr[i]][j]],ans);
}
}

if(ans==0)
ans=1;

cout<<ans<<endl;

return 0;
}


