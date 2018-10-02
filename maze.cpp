#include<bits/stdc++.h>
using namespace std;
bool visited[505][505];
int n,m;
char arr[505][505];


bool is_safe(int i,int j)
{
if(i>=0&&i<n&&j>=0&&j<m&&visited[i][j]==0&&arr[i][j]=='.')
return 1;
return 0;
}


bool check(int p)
{
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
if(arr[i][j]=='.'&&visited[i][j]==0)
return 0;
}
}

return 1;
}

void dfs(int i,int j)
{
visited[i][j]=1;
int r[]={1,0,-1,0};
int c[]={0,1,0,-1};

for(int k=0;k<4;k++)
{
if(is_safe(i+r[k],j+c[k]))
dfs(i+r[k],j+c[k]);
}

}

int main()
{
int k;
cin>>n>>m>>k;

char arr[n][m];

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cin>>arr[i][j];
}
}

int count=0;

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
if(count>=k)
break;

if(arr[i][j]=='.')
{
memset(visited,0,sizeof(visited));
dfs(i,j);
if(check(i))
{
count++;
arr[i][j]='X';
}
}

}
}


for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cout<<arr[i][j];
}
cout<<endl;
}

return 0;
}

