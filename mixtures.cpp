#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int min_cost_mixtures(int arr[],int n)
{
int dp[n];
for(int i=0;i<n;i++)
{
if(i==0)
dp[i]=arr[i];
else  if(i==1)
dp[i]=arr[0]*arr[1];
else
{
if((arr[i-1]*arr[i]+arr[i-2]*((arr[i-1]+arr[i])%100))>(arr[i-2]*arr[i-1]+((arr[i-1]+arr[i-2])%100)*arr[i]))
{
dp[i]=(arr[i-2]*arr[i-1]+((arr[i-1]+arr[i-2])%100)*arr[i]);
arr[i-2]=arr[i-1]=(arr[i-1]+arr[i-2])%100;
}
else
{
dp[i]=arr[i-1]*arr[i]+arr[i-2]*((arr[i-1]+arr[i])%100);
arr[i]=arr[i-1]=(arr[i-1]+arr[i])%100;
}
}
}
return dp[n-1];
}

int main ()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
cout<<min_cost_mixtures(arr,n);
//cout<<arr[1]*arr[2]+arr[0]*((arr[1]+arr[2])%100);
//cout<<(arr[0]*arr[1]+((arr[0]+arr[1])%100)*arr[2]);
//cout<<(arr[0]+arr[1])%100;
return 0;
}

