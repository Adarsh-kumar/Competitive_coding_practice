#include <bits/stdc++.h>

#define mod 1000000009
using namespace std;


int main()
{
int t,n,m,k;

cin>>t;

while(t--)

{

cin>>n>>m>>k;

int arr[n][m];

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
arr[i][j]=0;
}
}

int x,y,p;

while(k--)
{
cin>>x>>y>>p;
arr[x-1][y-1]=p;
}


int dp[n][m];

memset(dp,0,sizeof(dp));

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
if(i==0&&j==0)
dp[i][j]=arr[i][j];

else if(j==0)
dp[i][j]+=arr[i][j]+dp[i-1][j];


else if(i==0)
dp[i][j]=dp[i][j-1]+arr[i][j];


else if(i>0)
{
dp[i][j]+=arr[i][j]+dp[i][j-1];
dp[i][j]+=arr[i][j]+dp[i-1][j];
}


}
}

cout<<dp[n-1][m-1]%mod<<endl;
}

return 0;
}

