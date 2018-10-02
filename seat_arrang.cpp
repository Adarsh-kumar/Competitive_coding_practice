#include<bits/stdc++.h>
using namespace std;
char data[2000][2000];

int main()
{
int n,m,k;
cin>>n>>m>>k;
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cin>>data[i][j];
}
}
int row_count=0,col_count=0;
int ans=0;
for(int i=0;i<n-k+1;i++)
{
for(int j=0;j<m-k+1;j++)
{
row_count=0;
for(int ii=i;ii<i+k&&ii<n;ii++)
{
if(data[ii][j]=='*')
break;
else
row_count++;
}
if(row_count==k)
ans++;

col_count=0;

for(int jj=j;jj<j+k&&jj<m;jj++)
{
if(data[i][jj]=='*')
break;
else
col_count++;
}
if(col_count==k)
ans++;

}
}

cout<<ans<<endl;

return 0;
}





