#include<bits/stdc++.h>
using namespace std;

int n;


bool visited[1005][1005];

bool is_safe(int i,int j)
{
if(i>=0&&i<n&&j>=0&&j<n&&visited[i][j]==0)
return 1;
return 0;
}


int main()
{
cin>>n;

memset(visited,0,sizeof(visited));
int count=0;
int r[]={1,0};
int c[]={0,1};

char ans[n][n];

for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{

if(!visited[i][j])
{
visited[i][j]=1;
count++;
ans[i][j]='C';
for(int k=0;k<2;k++)
{
if(is_safe(i+r[k],j+c[k]))
{
ans[i+r[k]][j+c[k]]='.';
visited[i+r[k]][j+c[k]]=1;
}
}

}

}
}

cout<<count<<endl;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cout<<ans[i][j];
}
cout<<endl;
}


return 0;
}


