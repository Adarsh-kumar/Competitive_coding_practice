#include<iostream>
#include<bits/stdc++.h>
#define inf 10000000
using namespace std;

int min_cal(int n)
{
if(n>2048)
return(min_cal(n%2048)+n/2048);
int temp=2;
if(n<4)
return (n/2+n%2);
else
{
while(pow(2,temp+1)<=n)
{
temp++;
}
return (1+min_cal(n-pow(2,temp)));
}
}

int main()
{
int t,n;
cin>>t;
int temp=2;
while(t--)
{
cin>>n;
cout<<min_cal(n)<<endl;
return 0;
}
}


