#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void minMaxValues(int arr[],int n,int m)
{
//max min value of an expression
int prefix_sum[n];
prefix_sum[0]=arr[0];

for(int i=0;i<n;i++)
prefix_sum[i]=prefix_sum[i-1]+arr[i];

int dp[n+1][n+1];
int temp;
for(int size=1;size<n;size++)
{
for(int i=0;i<n;i++)
{
int j=i+size-1;
dp[i][j]=INT_MIN;
for(int k=i;k<j;k++)
{
if(k==i)
dp[i][j]=arr[i];
else
{
if(i==0)
temp=prefix_sum[k]*dp[k+1][n-1];
else
temp=(prefix_sum[k]-prefix_sum[i])*dp[k+1][n-1];

dp[i][j]=max(dp[i][j],temp);
}

}
}
}

cout<<dp[n-1][n-1]<<endl;

}



int main()
{
    int n = 2, m = 2;
    int arr[] = { 1, 2, 3, 4 };
    minMaxValues(arr, n, m);
    return 0;
}
