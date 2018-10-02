#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,K;

cin>>n>>K;

int arr[n];
int sum[n+1];
sum[0]=0;

for(int i=0;i<n;i++)
{
cin>>arr[i];
sum[i+1]=arr[i]+sum[i];
}

float dp[K+1][n][n];

for(int k=1;k<=K;k++)
{

for(int l=1;l<=n;l++)
{

for(int i=0;i<=n-l;i++)
{

int r=i+l-1;
dp[k][i][r]=INT_MIN;
if(k==1)
dp[k][i][r]=float(sum[r+1]-sum[l])/(r-i)+1;
else
{

for(int j=i+1;j<r;j++)
dp[k][i][r]=max(dp[k][i][r],dp[1][i][j]+dp[k-1][j+1][r]);


for(int p=1;p<=k;p++)
dp[k][i][r]=max(dp[k][i][r],dp[p][i][r]);

}

}
}
}

cout<<dp[K][0][n-1];

return 0;}


