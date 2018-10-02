#include<bits/stdc++.h>
#include<bits/stdc++.h>

using namespace std;

bool helper_function(long long n,long long ans)
{
bool flag=1;
long long limit;
if(n%2==0)
limit=n/2;
else
limit=n/2+1;
long long eat=0;
while(n>0)
{
if(flag)
{
if(n-ans>=0)
{
n-=ans;
eat+=ans;
}
else
{
eat+=n;
n=0;
}
flag=0;
}
else
{
n-=floor(0.1*n);
flag=1;
}
}

if(eat>=limit)
return 1;
else
return 0;
}

int main()
{
long long n;
cin>>n;
long long hi=1000000000000000000;
long long lo=1;
long long mid;
while(lo<hi)
{
mid=lo+(hi-lo)/2;
if(helper_function(n,mid))
hi=mid;
else 
lo=mid+1;
}
cout<<lo<<endl;
return 0;
}




