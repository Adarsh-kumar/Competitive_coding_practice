#include<iostream>
using namespace std;

int recursive_knapsack(int* value,int* weight,int n,int max_weight)
{
int result;
//base case
if(n==0||max_weight==0)
return 0;
if(max_weight-weight[n]<0)
result=recursive_knapsack(value,weight,n-1,max_weight);
else
result=max(value[n]+recursive_knapsack(value,weight,n-1,max_weight),recursive_knapsack(value,weight,n-1,max_weight-value[n]));

return result;
}

int knap_sack_dp(int* value,int* weight,int n,int max_weight)
{
int dp[n][max_weight+1];
for(int i=0;i<n;i++)
{
for(int j=0;j<=max_weight;j++)
{
if(i==0)
{
if(weight[i]<=j)
dp[i][j]=value[i];
else
dp[i][j]=0;
}
else if(j==0)
dp[i][j]=0;
else  if(weight[i]>j)
dp[i][j]=dp[i-1][j];
else 
dp[i][j]=max(value[i]+dp[i][j-weight[i]],dp[i-1][j]);//it's when duplicate items are allowed 
}
}

return dp[n-1][max_weight];
}

int main()
{
int value[]={10, 30, 20};
int W = 100;
    int val[] = {10, 30, 20};
    int wt[] = {5, 10, 15};
int weight[]={5, 10, 15};
//cout<<recursive_knapsack(value,weight,3,50);
cout<<knap_sack_dp(value,weight,3,W);
return 0;
}
