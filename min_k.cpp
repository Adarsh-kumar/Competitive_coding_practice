#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long ban[100000];

int min_k_finder(long long arr[],int n,int h)
{
long long lo=0;
long long hi=1000000000;
long long mid;
int no_of_hours;

while(lo<hi)
{
mid=lo+(hi-lo)/2;
no_of_hours=1;
int temp=0;
for(int i=0;i<n;i++)
{
if(temp+arr[i]<=mid)
temp=temp+arr[i];

else
{
if(i!=0)
temp=arr[i-1]%mid;
else
temp=0;
no_of_hours+=(temp+arr[i])/mid;
temp=arr[i]%mid;
}
}

if(no_of_hours<h)
hi=mid;
else
lo=mid+1;
}
return  hi;
}

int main()
{
int t,n,h;
cin>>t;
while(t--)
{
cin>>n>>h;
for(int i=0;i<n;i++)
cin>>ban[i];
sort(ban,ban+n);
cout<<min_k_finder(ban,n,h)<<endl;
}
return 0;
}


