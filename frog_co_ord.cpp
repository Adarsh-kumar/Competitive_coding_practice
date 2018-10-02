#include<bits/stdc++.h>

using namespace std;

int dp[205][205][402];


int main()
{
int x,y,s,t;
cin>>x>>y>>s>>t;

memset(dp,0,sizeof(dp));

for(int i=0;i<=100;i++)
{
for(int j=0;j<=100;j++)
{
for(int k=0;k<=400;k++)
{


if(i==0&&j==0)
{
if(k==0)
dp[i][j][k]=1;
}

else if(k==0)
{
if(i==0&&j==0)
dp[i][j][k]=1;
}


else if(i>0&&j>0)
{
dp[i][j][k]=dp[i-1][j][k-1]+dp[i][j-1][k-1]+dp[i][j][k-1];
}

else if(i>0)
{
dp[i][j][k]=dp[i-1][j][k-1]+dp[i][j][k-1];
}

else 
{
dp[i][j][k]=dp[i][j-1][k-1]+dp[i][j][k-1];
}

}
}
}

int ans=0;

for(int i=x;i<=x+t;i++)
{
for(int j=y;j<=y+t;j++)
{
if(dp[i][j][t]>0)
ans+=1;
}
}
cout<<ans<<endl;
return 0;
}



