#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m;
cin>>n>>m;

int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int dp[n][m+1];

for(int i=0;i<n;i++)
{
for(int j=0;j<=m;j++)
{
if(j==0)
dp[i][j]=1;

else if(i==0)
{
if(arr[i]-j>=0)
dp[i][j]=1;
else
dp[i][j]=0;
}
else 
{
if(arr[i]-j>=0)
dp[i][j]=min(1+dp[i-1][arr[i]-j],dp[i-1][j]);
else
dp[i][j]=dp[i-1][j];
}

}
}

cout<<dp[n-1][m]<<endl;

return 0;
}

