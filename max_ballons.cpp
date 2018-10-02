#include<iostream>
#include<bits/stdc++.h>
#define inf 10000000
using namespace std;

int main()
{
long long t;
long long arr[3];
cin>>t;
while(t--)
{
for(int i=0;i<3;i++)
cin>>arr[i];
sort(arr,arr+3);
long long ans=arr[0];
arr[1]-=arr[0];
arr[2]-=arr[0];

while(arr[1]*2>arr[2])
{
arr[1]--;
}

ans+=arr[1];

cout<<ans<<endl;
return 0;
}
}

