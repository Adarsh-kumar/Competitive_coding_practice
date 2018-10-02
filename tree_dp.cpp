#include<bits/stdc++.h>
#define hell 1000000007
using namespace std;

int main()
{
int n,k,d;

cin>>n>>k>>d;

int dp[n+1][2];

memset(dp,0,sizeof(dp));
dp[0][0]=1;
dp[0][1]=0;




for(int i=1;i<=n;i++)
{
for(int j=1;j<=k;j++)
{

if(i-j<0)
break;


if(j<d)
{
dp[i][0]+=(dp[i-j][0]);
dp[i][0]%=hell;
dp[i][1]+=(dp[i-j][1]);
dp[i][1]%=hell;
}

else
{
dp[i][1]+=(dp[i-j][1]);
dp[i][1]%=hell;
dp[i][1]+=(dp[i-j][0]);
dp[i][1]%=hell;
}


}
}

cout<<dp[n][1]<<endl;

return 0;
}

