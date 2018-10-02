#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main() {
    int n,K;
   
     cin>>n>>K;
     int  arr[n];
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];
       // sum[i+1]=sum[i]+arr[i];
     }
     
     int dp[n];
     int dp_sum[n+1];
     
     //dp_sum[0]=0;
     dp[0]=1;
     dp_sum[0]=0;
     dp_sum[1]=1;
     
     for(int i=1;i<n;i++)
     {
         
     dp[i]=0;
     int k=i-K;
     
     if(arr[i]==1)
     {
      dp[i]=0;
     }
     else
     {
    if(k<=0)
    dp[i]=dp_sum[i]-dp_sum[0];
    else
    dp[i]=dp_sum[i]-dp_sum[k];
     /*for(int j=i-1;j>=0&&j>=k;j--)
     {
         dp[i]+=dp[j];
     }*/
     }
     dp_sum[i+1]=dp_sum[i]+dp[i];
     
     }
     
     cout<<dp[n-1];
	return 0;
}
