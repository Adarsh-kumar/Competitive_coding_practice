#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

long long arr[1000];
long long dp[1000][1000];

long long sum_sum(int s,int e)
{
int ans=0;
for(int i=s;i<=e;i++)
{
ans+=arr[i];
ans%=100;
}
return ans;
}

long long minimum_smoke(int i,int j)
{
if(i==j)
return 0;

else if(dp[i][j]!=-1)
return (dp[i][j]);
else
{
dp[i][j]=INT_MAX;
for(int k=i;k<=j;k++)
dp[i][j]=min(dp[i][j],minimum_smoke(i,k)+minimum_smoke(k+1,j)+sum_sum(i,k)*sum_sum(k+1,j));
}

return dp[i][j];
}

int main ()
{
int n;
while(scanf("%d",&n)!=EOF)
{
for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
dp[i][j]=-1;
}


cout<<minimum_smoke(0,n-1)<<endl;
}
return 0;
}
