#include<iostream>
#include<bits/stdc++.h>

using namespace std;
#define  N 1000

int goesto[N];
int ans=0;
bool visited[N];

int dfs(int permutation[],int u,int n)
{
if(visited[u])
return 0;
else
{
visited[u]=1;
return (1+dfs(permutation,goesto[u],n));
}
}


int no_of_transition(int permutation[],int n)
{
// lets create thee goes to array 
for(int i=0;i<=n;i++)
visited[i]=0;

for(int i=0;i<n;i++)
goesto[permutation[i]]=i+1;

for(int i=1;i<=n;i++)
{
if(visited[i]==0)
ans+=dfs(permutation,i,n)-1;
}

return ans;
}



int main()
{
    int permutation[] = { 4,3,2,1};
    int n = sizeof(permutation) / sizeof(permutation[0]);
 
    cout << no_of_transition(permutation, n);
    return 0;
}
