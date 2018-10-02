#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,k1,k2;
cin>>n;


int n=1000000;

int dp[n+1][2];

memset(dp,0,sizeof(dp));
dp[1]=1;


for(j=0;j<2;j++)
{
if(j==0)
{
for(int i=0;i<k1;i++)
{
dp[p1[i]][j]=1;
}
}
else
{
for(int i=0;i<k2;i++)
{
dp[p2[i]][j]=1;
}
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


