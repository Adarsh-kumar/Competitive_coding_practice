#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int dp[n][n];

for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(i==j)
dp[i][j]=arr[i];
}
}

// calculating the value in recursive manner
for(int size=2;size<=n;size++)
{
for(int i=0;i<=n-size;i++)
{
int j=i+size-1;
dp[i][j]=dp[i][j-1] ^ arr[j] ^ arr[j-1] ;
}
}

//using dp to get max subseq
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(i!=j)
{
if(j==0)
dp[i][j]=max(dp[i+1][j],dp[i][j]);
else
dp[i][j]=max(dp[i][j],max(dp[i+1][j],dp[i][j-1]));
}
}
}




int t;
cin>>t;
while(t--)
{
int u,v;
cin>>u>>v;
cout<<dp[u-1][v-1]<<endl;
}

return 0;
}

