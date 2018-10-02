#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int total_ways(int n,int m,int x)
{
int dp[n+1][(m*n)+1];
memset(dp,0,sizeof(dp));

for(int j=1;j<=m;j++)
{
dp[1][j]=1;
}

for(int i=2;i<=n;i++)
{
for(int j=1;j<=(m*n);j++)
{
for(int k=1;k<=m && k<=j;k++)
{
dp[i][j]+=dp[i-1][j-k];
}
}
}

return dp[n][x];
}

int main()
{
int n,m,x;
cin>>n>>m>>x;
cout<<total_ways(n,m,x)<<endl;
return 0;
}
