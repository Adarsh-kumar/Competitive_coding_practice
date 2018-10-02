#include<bits/stdc++.h>
using namespace std;

bool is_safe(int i,int j,int m,int n)
{
if(i>=0&&i<=m&&j>=0&&j<=n)
return 1;
else
return 0;
}


int main()
{
int n,m;
cin>>m>>n;

char arr[m][n];

for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cin>>arr[i][j];
}
}

int count=0;
int wolf=0;
bool visited[m][n];

for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
if(arr[i][j]=='W')
{
if(is_safe(i-1,j,m,n)&&arr[i-1][j]=='P'||is_safe(i+1,j,m,n)&&arr[i+1][j]=='P'||is_safe(i,j-1,m,n)&&arr[i][j-1]=='P'||is_safe(i,j+1,m,n)&&arr[i][j+1]=='P')
count++;
}
}
}


cout<<count<<endl;

return 0;
}
