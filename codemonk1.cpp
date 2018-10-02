#include <bits/stdc++.h>

using namespace std;


int main()
{

int t,n;
cin>>t;
while(t--)
{
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int dp[n][2];

int ans=0;

if(arr[0]!=-1)
ans++;

if(arr[n-1]!=1)
ans++;

for(int i=1;i<n-1;i++)
{
if(i==1)
{
if(arr[1]==-1)
{
dp[i][1]=1;
dp[i][0]=0;
}
else 
{
dp[i][0]=1;
dp[i][1]=0;
}
}

else
{
if(arr[i]==1)
{
dp[i][0]=min(dp[i-1][0]+1,dp[i-1][1]);
dp[i][1]=min(dp[i-1][0]+1,dp[i-1][1]);
}
}

ans+=min(dp[n-2][0],dp[n-2][1]);

cout<<ans<<endl;
}
return 0;
}

