#include<iostream>
using namespace std;

int find_optimal_dp(int n)
{
int dp[n];
if(n<7)
return n;

for(int i=0;i<n;i++)
{
if(i<6)
{
dp[i]=i+1;
continue;
}
dp[i]=0;
for(int b=i-2;b>=1;b--)
{
int curr=(n-b-1)*dp[b-1];
if(curr>dp[i])
dp[i]=curr;
}

}
return dp[n-1];
}

int main()
{
    int N;
 
    // for the rest of the array we will rely on the previous
    // entries to compute new ones
for(int i=1;i<=20;i++)   
cout<<find_optimal_dp(i)<<endl;
return 0;
}


