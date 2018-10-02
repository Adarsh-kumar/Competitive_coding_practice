#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,m,q;
cin>>n>>m>>q;

int dp[n][m];

bool ab[n][m];

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cin>>ab[i][j];
}
}

for(int i=0;i<n;i++)
{
for(int j=0;i<m;j++)
{
if(i==0&&j==0)
dp[i][j]=1;
else if(i>0&&j>0)
dp[i][j]=1+dp[i-1][j]+dp[i][j-1];
else if(i>0&&j==0)
dp[i][j]=1+dp[i-1][j];
else
dp[i][j]=1+dp[i][j-1];
}
}


