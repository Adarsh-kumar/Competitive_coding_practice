#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int bit_counter(long long n)
{
int lo=0;
int hi=32;

while(lo<hi)
{
int mid=lo+(hi-lo)/2;
long long temp=pow(2,mid);
if(temp==n)
return mid;
else if(temp>n)
hi=mid;
else
lo=mid+1;
}

return (lo);
}

int main()
{
int t,n;
long long k;
cin>>t;
while(t--)
{
cin>>n>>k;
int bit_count=bit_counter(k);
//cout<<"it's bit count"<<bit_count<<endl;
//cout<<bit_count<<endl;
//int b=bit_count-1;
long long ans=1;
//if k is equal to the max power i.e. k=128  etc
if(pow(2,bit_count)==k)
ans=ans<<bit_count;
else
ans=ans<<bit_count-1;

int count=0;
cout<<ans<<" ";
count++;
n--;
while(n--)
{
if(count<bit_count)
{
//cout<<ans<<" ";
//each time right shift 
ans=ans>>1;
cout<<ans<<" ";
count++;
}
else
cout<<1<<" ";
}
cout<<endl;
}
return 0;
}



//count the number of bits and then shift one bit everry time

