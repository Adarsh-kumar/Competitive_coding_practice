#include<bits/stdc++.h>
using namespace std;

int main()
{
int k,l,m;
cin>>k>>l>>m;

int n=1000000;

int dp[n+1];
memset(dp,0,sizeof(dp));
dp[1]=1;
for(int i=2;i<=n;i++)
{
if(i==1||i==l||i==k)
{
dp[i]=1;
}
else
{
if(dp[i-1]==0)
dp[i]=1;
else if(i-k>=0&&dp[i-k]==0)
dp[i]=1;
else  if(i-l>=0&&dp[i-l]==0)
dp[i]=1;
}
}

while(m--)
{
int temp;
cin>>temp;
if(dp[temp]==1)
cout<<"A";
else
cout<<"B";
}


return 0;}


