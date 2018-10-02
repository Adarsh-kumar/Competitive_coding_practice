#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n;
cin>>n;
long long arr[n];
long long sum[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
if(i!=0)
sum[i]=arr[i]+sum[i-1];
else
sum[i]=arr[i];
}
int s=sum[n-1]/3;
if(s%3!=0)
{
cout<<0<<endl;
return 0;
}
 
  int count =0;
for(long long i=0;i<n-1;i++)
{
if(sum[i]==s)
{
for(long long j=i+1;j<n-1;j++)
{
if(sum[j]-sum[i]==sum[i])
count++;
}
}
}

cout<<count<<endl;
return 0;
}


