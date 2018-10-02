#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
long long arr[n];

long long sum1=0;

for(int i=0;i<n;i++)
{
cin>>arr[i];
sum1+=arr[i];
}

int m;
cin>>m;

long long arr2[m];

long long sum2=0;

for(int i=0;i<m;i++)
{
cin>>arr[i];
sum2+=arr[i];
}

if(sum1>sum2)
{
sort(arr,arr+n,greater<int>() );
sort(arr2,arr2+m);

long long diff=sum1-sum2;



