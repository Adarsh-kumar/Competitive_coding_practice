#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
int cost[n];

for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=0;i<n;i++)
cin>>cost[i];

int dp[n][4];

for(int i=0;i<n;i++)
{
for(int j=0;j<=3;j++)
{


if(j==0)
dp[i][j]=0;


else if(i<j-1)
dp[i][j]=INT_MAX;



else if(j==1)
{
dp[i][j]=INT_MAX;
for(int k=i-1;k>=0;k--)
{
if(arr[k]<arr[i])
dp[i][j]=min(dp[i][j],cost[k]);
}
}

else
{
dp[i][j]=min(dp[i-1][j],cost[i]+dp[i][j-1]);
}

}
}

if(dp[n-1][3]!=INT_MAX)
cout<<dp[3][2]<<endl;
else
cout<<-1<<endl;

return 0;
}


