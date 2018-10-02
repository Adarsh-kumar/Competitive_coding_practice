#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long arr[100000];
long long arr2[100000];

int my_binary(long long arr[],int n,int a)
{
int hi=n-1;
int lo=0;
while(lo<hi)
{
int mid=lo+(hi-lo)/2;
if(arr[mid]>a)
hi=mid;
else 
lo=mid+1;
}

int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++)
cin>>arr[i]>>arr2[i];

sort(arr,arr+n);
int count=0;

for(int i=0;i<n;i++)
{
if(my_binary(arr,n,arr2[i])!=-1)
count++;
}

cout<<count;

return 0;
}

