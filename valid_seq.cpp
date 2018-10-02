#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isPossible(int arr[],int n,int m)
{
    bool dp[n][n];
    memset(dp, -1, sizeof(dp));

int prefix_sum[n];

prefix_sum[0]=0;

for(int i=1;i<n;i++)
prefix_sum[i]=prefix_sum[i-1]+arr[i];


for(int size=1;size<n-1;size++)
{
for(int i=0;i<n-1;i++)
{
int j=i+size-1;
for(int k=i;k<j&&k<n;k++)
{
if(k==i)
dp[i][j]=(arr[i]%m);
else
{
dp[i][j]=max(dp[i][k],


int main()
{
    int arr[] = { 1, 2, 3, 4, 6 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int M = 4;
 
    // MAX is the Maximum value M can take
    int dp[n + 1][MAX];
    memset(dp, -1, sizeof(dp));
 
    bool res;
    res = isPossible(arr[],n, m);
 
    cout << (res ? "True" : "False") << endl;
    return 0;
}
