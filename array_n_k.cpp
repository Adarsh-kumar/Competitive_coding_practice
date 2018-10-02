#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int countArray(int n,int K)
{
int dp[n+1][K+1];

memset(dp,0,sizeof(dp));

for(int i=1;i<=n;i++)
{
for(int k=1;k<=K;k++)
{
if(i==1)
dp[i][k]=1;
else
{
for(int j=1;j<=9;j++)
{
if(k-j>0)
dp[i][k]+=dp[i-1][k-j];
}
}
}
}


return dp[n][K];
}

int main()
{
    int N = 3, K = 7;
 
    cout << countArray(N, K) << endl;
 
    return 0;
}
