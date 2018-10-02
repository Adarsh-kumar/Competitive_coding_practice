#include<bits/stdc++.h>
using namespace std;
int arr[5001];
int cost[5001];

int main()
{
int n;
cin>>n;

for(int i=0;i<n;i++)
{
cin>>arr[i];
if(i>0)
{
cost[i]=abs(arr[i]-arr[i-1])+1;
}
else
cost[i]=0;
}
int k=n;
int dp[n][k][2];

for(int i=0;i<n;i++)
{
for(int k=0;k<=i;k++)
{
for(int j=0;j<2;j++)
{

int current_cost;
int current_state;
if(k==0||i==0)
{
dp[i][j][k]=0;
}
else
{
if(j==0)
{
current_cost=0;
current_state=arr[i];
}

if(j==1)
{
current_cost=cost[i];
current_state=cost[i];
}


if(i>0 && current_state>arr[i-1])
dp[i][k][j]=min(dp[i-1][k-1][0]+current_cost,min(dp[i-1][k][0],dp[i-1][k][1]));

else if(i >0 &&  current_state>cost[i-1])
dp[i][k][j]=min(dp[i-1][k-1][1]+current_cost,min(dp[i-1][k][0],dp[i-1][k][1]));

}
}

}

}

for(int i=0;i<n/2;i++)
cout<<min(dp[n-1][i][0],dp[n-1][i][1])<<endl;

return 0;
}




