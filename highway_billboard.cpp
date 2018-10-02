#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int max_revenue(int m,int x[],int rev[],int n,int t)
{
int dp[m][2];
memset(dp,0,sizeof(dp));

int revenue[m];
memset(revenue,0,sizeof(revenue));

for(int i=0;i<n;i++)
revenue[x[i]]=rev[i];


for(int i=0;i<m;i++)
{
if(i==0)
{
dp[i][0]=0;
dp[i][1]=revenue[i];
}
else
{
dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
if(i-(t+1)>=0)
dp[i][1]=max(dp[i-(t+1)][0]+revenue[i],dp[i-(t+1)][1]+revenue[i]);
else
dp[i][1]=revenue[i];
}
}
return max(dp[m-1][0],dp[m-1][1]);
}


int main()
{
    int m = 20;
    int x[] = {6, 7, 12, 13, 14};
    int revenue[] = {5, 6, 5, 3, 1};
    int n = sizeof(x)/sizeof(x[0]);
    int t = 5;
    cout << max_revenue(m, x, revenue, n, t) << endl;
    return 0;
}
