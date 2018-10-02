#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int dp[8][8][8];
bool is_safe(int i ,int j,int n)
{
if((i>=0&&j<n) && (j>=0&&i<n))
return 1;
else
return 0;
}

int calculate_prob(int i,int j,int n,int k)
{
if(dp[i][j][k]!=-1)
return dp[i][j][k];
float prob=0.0;
if(!is_safe(i,j,n))
{
return 0.0;
}
else if(k==0)
{
dp[i][j][k]=1.0;
return 1.0;
}
else
{
prob+=(calculate_prob(i,j+1,n,k-1)*0.125+calculate_prob(i,j-1,n,k-1)*0.125+calculate_prob(i-1,j,n,k-1)*0.125+calculate_prob(i+1,j,n,k-1)*0.125+calculate_prob(i-2,j+1,n,k-1)*0.125+calculate_prob(i+2,j+1,n,k-1)*0.125+calculate_prob(i-2,j-1,n,k-1)*0.125+calculate_prob(i+2,j-1,n,k-1)*0.125);
dp[i][j][k]=prob;
}
return prob;
}

int calculate_prob_dp(int i,int j,int n,int k)
{
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
for(int p=0;p<n;p++)
{
dp[i][j][p]=-1;
}
}
}


return calculate_prob(i,j,n,k);
}

int main()
{
    // number of steps
    int K = 3;
    int n=8;
    cout << calculate_prob_dp(0, 0,n, K) << endl;
 
    return 0;
}
