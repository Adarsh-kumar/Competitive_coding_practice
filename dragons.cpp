#include <bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];

int dp[n];

for(int i=0;i<n;i++)
{
dp[i]=1;

if(arr[i]==2)
{
for(int j=i-1;j>=0;j--)
{
if(arr[j]==1)
dp[i]=max(1+dp[j],dp[i]);
