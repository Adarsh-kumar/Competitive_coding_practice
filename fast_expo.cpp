#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long fast_expo(long long  a,long long b)
{
if(b==1)
return (a)%9;
if (b==0)
return 1;
if(b==2)
return((a%9)*(a%9));
else
{
if(b%2==0)
return(pow(fast_expo(a,b/2),2));
else
return(pow(fast_expo(a,b/2),2)*(a%9));
}
}

int strange_function(long long a,long long b)
{
long long temp=fast_expo(a,b);
if(temp%9==0)
return 9;
else
return (temp%9);
}

int main()
{
long long a,b;
int t;
cin>>t;
while(t--)
{
cin>>a>>b;
if(a%9==0)
cout<<9<<endl;
else
cout<<strange_function(a,b)<<endl;
}
return 0;
}
