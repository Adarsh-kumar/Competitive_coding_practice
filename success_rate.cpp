#include<iostream>
#include<bits/stdc++.h>

using namespace std;
bool another_binary(long long x,long long y,long long p,long long q,long long range)
{
long long  lo=0;
long long  hi=range;
while(lo<hi)
{
long long mid=lo+(hi-lo)/2;
if(float(x+mid)/(y+range)==float(p)/q)
return 1;
else if(float(x+mid)/(y+range)<float(p)/q)
lo=mid+1;
else
hi=mid;
}
return(float(x+lo)/(y+range)==float(p)/q);
}

int main()
{
int x,y,p,q;
int t;
cin>>t;
while(t--)
{
cin>>x>>y>>p>>q;
if(float(x)/y==float(p)/q)
cout<<0<<endl;
else
{
long long hi=1000000000;
long long lo=0;
while(lo<hi)
{
long long mid=lo+(hi-lo)/2;
if(another_binary(x,y,p,q,mid))
hi=mid;
else if(float(x+mid/2)/(y+mid)>float(p)/q)
hi=mid;
else
lo=mid+1;
}

if(float(x+lo)/(y+lo)!=float(p)/float(q))
cout<<-1<<endl;
else
cout<<lo<<endl;


cout<<another_binary(4,6,1,2,8);
}
}
return 0;
}




