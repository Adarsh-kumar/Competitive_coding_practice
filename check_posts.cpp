#include<bits/stdc++.h>
#define hell 1000000007

using namespace std;
vector<int> adj[100005];
int price=INT_MAX;
int counter;
int cost[100005];

bool visited[100005];

stack<int> st;


void modified_dfs(int u)
{
visited[u]=1;
for(int e:adj[u])
{
if(visited[e]==0)
modified_dfs(e);
}

st.push(u);
}


void dfs(int u)
{
if(cost[u]==price)
counter++;

visited[u]=1;
price=min(price,cost[u]);

for(int e:adj[u])
{
if(visited[e]==0)
dfs(e);
}

}


void get_min_cost(int n)
{
memset(visited,0,sizeof(visited));

int final_cost=0;

for(int i=1;i<=n;i++)
{
if(visited[i]==0)
modified_dfs(i);
}

//transpose the graph

int final_count=1;
vector<int> adj2[n+1];

for(int i=1;i<=n;i++)
{
for(int e:adj[i])
{
adj2[e].push_back(i);
}
}

memset(visited,0,sizeof(visited));

while(!st.empty())
{
int top=st.top();
st.pop();
price=INT_MAX;
counter=0;
if(visited[top]==0)
{
dfs(top);
final_cost+=price;
final_count=(final_count*counter)%hell;
}

}

final_count%=hell;
cout<<final_cost<<" "<<final_count<<endl;

}



int main()
{
int n,m;
cin>>n;

for(int i=0;i<n;i++)
cin>>cost[i+1];

cin>>m;

while(m--)
{
int u,v;
cin>>u>>v;
adj[u].push_back(v);
}

get_min_cost(n);

return 0;}


