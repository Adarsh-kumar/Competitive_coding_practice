#include<bits/stdc++.h>
using namespace std;

char arr[55][55];

bool visited[55][55];



int len=1;

int dfs(int i,int j,int n,int m,int len)
{
visited[i][j]=1;

if(is_safe(i-1,j-1,n,m)&&!visited[i-1][j-1])
{
if(arr[i-1][j-1]==arr[i][j]+1)
len++;
dfs(i-1,j-1,n,m);
}

if(is_safe(i+1,j+1,n,m)&&!visited[i+1][j+1])
{
if(arr[i+1][j+1]==arr[i+1][j+1])
len++;
dfs(i-1,j-1,n,m);
}


if(is_safe(i-1,j-1,n,m)&&!visited[i-1][j-1])
{
if(arr[i-1][j-1]==arr[i][j]+1)
len++;
dfs(i-1,j-1,n,m);
}
if(is_safe(i-1,j-1,n,m)&&!visited[i-1][j-1])
{
if(arr[i-1][j-1]==arr[i][j]+1)
len++;
dfs(i-1,j-1,n,m);
}
if(is_safe(i-1,j-1,n,m)&&!visited[i-1][j-1])
{
if(arr[i-1][j-1]==arr[i][j]+1)
len++;
dfs(i-1,j-1,n,m);
}
if(is_safe(i-1,j-1,n,m)&&!visited[i-1][j-1])
{
if(arr[i-1][j-1]==arr[i][j]+1)
len++;
dfs(i-1,j-1,n,m);
}
if(is_safe(i-1,j-1,n,m)&&!visited[i-1][j-1])
{
if(arr[i-1][j-1]==arr[i][j]+1)
len++;
dfs(i-1,j-1,n,m);
}
if(is_safe(i-1,j-1,n,m)&&!visited[i-1][j-1])
{
if(arr[i-1][j-1]==arr[i][j]+1)
len++;
dfs(i-1,j-1,n,m);
}
if(is_safe(i-1,j-1,n,m)&&!visited[i-1][j-1])
{
if(arr[i-1][j-1]==arr[i][j]+1)
len++;
dfs(i-1,j-1,n,m);
}






int main()
{
int n,m;


for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cin>>arr[i][j];
}
}

cout<<longest_len(0,0,n,m);

return 0;
}


