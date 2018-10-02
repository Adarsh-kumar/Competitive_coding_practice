#include<iostream>
using namespace std;

bool subset_sum(int arr[],int n,int sum)
{
if(n==0 || arr[n]==sum)
return(arr[n]==sum);
else if(arr[n]>sum)
return (subset_sum(arr,n-1,sum));
else
return (subset_sum(arr,n-1,sum)||subset_sum(arr,n-1,sum-arr[n]));
}
//bottom up approach to solve the problem
bool subset_sum_dp(int arr[],int n,int sum)
{
int dp[n][sum+1];
for(int i=0;i<n;i++)
{
for(int j=0;j<=sum;j++)
{
if(i==0 || arr[i]==j)
dp[i][j]=int(arr[i]==j);
else if(arr[i]>j)
dp[i][j]=dp[i-1][j];
else
dp[i][j]=int(dp[i-1][j]||dp[i-1][j-arr[i]]);
if(i==n-1&&j==sum)
{
if(arr[i]>j)
{
if(dp[i-1][j])
}
}
cout<<"it's dp solution"<<endl;
return dp[n-1][sum];
}

int main()
{
int arr[]={1,2,3,4,5};
int ans=subset_sum_dp(arr,5,14);
cout <<ans<<"here it is"<<endl;
return 0;
}

