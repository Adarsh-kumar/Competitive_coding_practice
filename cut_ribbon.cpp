#include<bits/stdc++.h>

using namespace std;

int arr[3];

int main()
{
int n;
cin>>n;

for(int i=0;i<3;i++)
cin>>arr[i];

int dp[n+1][3];

memset(dp,0,sizeof(dp));

for(int i=0;i<=n;i++)
{
for(int j=0;j<3;j++)
{

if(i==0)
dp[i][j]=0;

else if(j==0)
{
if(i-arr[j]>=0)
dp[i][j]=1+dp[i-arr[j]][j];
else
dp[i][j]=INT_MIN;
}

else 
{
if(i-arr[j]>=0)
dp[i][j]=max(1+dp[i-arr[j]][j],dp[i][j-1]);
else
dp[i][j]=dp[i][j-1];
}

}

}



cout<<dp[n][2]<<endl;
return 0;
}



































