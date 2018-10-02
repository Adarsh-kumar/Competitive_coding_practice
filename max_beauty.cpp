#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int max_beauty(int arr[],int n,int K)
{
int dp[n][K];


//prefix xor array 

int prefix_xor[n];
prefix_xor[0]=arr[0];

int sufix_xor[n];

sufix_xor[0]=arr[0];

for(int i=0;i<n;i++)
{
sufix_xor[i]=0;
for(int j=i;j<n;j++)
{
sufix_xor[i]^=arr[j];
}
}

for(int i=1;i<n;i++)
{
prefix_xor[i]=0;
for(int j=0;j<=i;j++)
{
prefix_xor[i]^=arr[j];
}
}


for(int i=0;i<0;i++)
{
for(int j=0;j<k;j++)
{
dp[i][j]=INT_MIN;
if(j==0)
dp[i][j]=


for(int size=1;size<=n;size++)
{
for(int i=0;i<=n-size;i++)
{
for(int k=1;k<K-1;k++)
{
for(int j=i;j<i+size;j++)
{
dp[i+size-1][k]=max(xoritoj+dp[j+1][k-1]);
}



int main()
{
int n,k;
cin>>n>>K;
long long arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

cout<<max_beauty(arr,n,k);

return 0;
}

