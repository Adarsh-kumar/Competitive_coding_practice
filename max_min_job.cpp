#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int max_work(int arr1[],int arr2[],int n)
{
int dp[n][3];
for(int i=0;i<n;i++)
{
if(i==0)
{
dp[i][0]=0;
dp[i][1]=arr2[i];
dp[i][2]=arr1[i];
}
else
{
dp[i][0]=max(dp[i-1][0],max(dp[i-1][1],dp[i-1][2]));
dp[i][1]=dp[i-1][0]+arr1[i];
dp[i][2]=max(dp[i-1][0]+arr2[i],max(dp[i-1][1]+arr2[i],dp[i-1][2]+arr2[i]));
}
}

return max(max(dp[n-1][0],dp[n-1][1]),dp[n-1][2]);
}



int main()
{
    int n = 5;
    int high[] = {3, 6, 8, 7, 6};
    int low[] = {1, 5, 4, 5, 3};
    cout<<max_work(high,low,n);
    return 0;
}
