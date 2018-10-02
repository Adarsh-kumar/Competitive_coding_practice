#include<bits/stdc++.h>
using namespace std;
#define maxn 100005

int main()
{
int n,m,divisions;
cin>>n>>m>>divisions;
int arr[n];
long long mult[n+1];

mult[0]=0;

for(int i=0;i<n;i++)
{
cin>>arr[i];
mult[i+1]=mult[i]+arr[i];
}

int dp[n][n][divisions+1];




int l=m;
memset(dp,0,sizeof(dp));

for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
for(int k=0;k<=divisions;k++)
{
dp[i][j][k]=0;
}
}
}


for(int i=0;i<=n-l;i++)
{
int j=i+l-1;
dp[i][j][1]=mult[j+1]-mult[i];
//cout<<dp[i][j][1]<<endl;
}

for(int div=1;div<=divisions;div++)
{
for(int l=m+1;l<=n;l++)
{
for(int i=0;i<=n-l;i++)
{
int j=i+l-1;
dp[i][j][div]=INT_MIN;
for(int k=i+1;k<j;k++)
{
dp[i][j][div]=max(dp[i][j][div],dp[i][k][0]+dp[k+1][j][div]);
}

}
}
}

cout<<dp[0][n-1][divisions]<<endl;

return 0;
}

