#include<iostream>
#include<bits/stdc++.h>

using namespace std;
long long arr[100001];

int main()
{
int n;
long long k;
cin>>n>>k;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}

for(int p=0;p<k;p++)
{
for(int i=1;i<n;i++)
{
arr[i]=arr[i-1]|arr[i];
}

bool flag=1;
for(int i=1;i<n;i++)
{
int l=(arr[i]) & (arr[i]+1);
if(l!=0)
flag=0;
}
if(flag)
break;
}

for(int i=0;i<n;i++)
cout<<arr[i]<<" ";



return 0;
}
