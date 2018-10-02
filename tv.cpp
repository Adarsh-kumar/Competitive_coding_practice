#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b)
{
if(b%a==0)
return a;
else
return (gcd(b%a,a));
}


int main()
{
long long a,b,c,d;
cin>>a>>b>>c>>d;

long long gc;

if(d>=c)
gc=gcd(c,d);
else
gc=gcd(d,c);

//cout<<gc<<endl;
//cout<<gcd(8,12)<<endl;

c/=gc;
d/=gc;

long long temp1=a/c;
long long temp2=b/d;

cout<<min(temp1,temp2);

return 0;
}

