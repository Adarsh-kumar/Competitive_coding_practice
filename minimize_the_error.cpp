#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n,k1,k2;
cin>>n>>k1>>k2;

int k=k1+k2;

long long a[n],b[n];

for(int i=0;i<n;i++)
cin>>a[i];

for(int i=0;i<n;i++)
cin>>b[i];

std::priority_queue<long long> pq;
long long ans=0;

for(int i=0;i<n;i++)
{
pq.push(abs(a[i]-b[i]));
ans+=(a[i]-b[i])*(a[i]-b[i]);
}

int flag=0;
while(k)
{
int temp=pq.top();
pq.pop();
if(temp>0)
{
ans-=(2*temp-1);
pq.push(temp-1);
}
else if(temp==0)
{
ans+=1;
pq.push(temp+1);
}
k--;
}


cout<<ans<<endl;
return 0;
}

