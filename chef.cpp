#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define N 1000
long long  arr[100000];
long long  glove[100000];

int main()
{

int t,n,f_count,b_count;
cin>>t;
while(t)
{
f_count=0,b_count=0;
cin>>n;
for(int i=0;i<n;i++)
cin>>arr[i];
for(int i=0;i<n;i++)
cin>>glove[i];
for(int i=0;i<n;i++)
{
if(arr[i]<=glove[i])
f_count++;
else
break;
}
for(int i=0;i<n;i++)
{
if(arr[i]<=glove[n-1-i])
b_count++;
else
break;
}

if(f_count==n  && b_count==n)
cout<<"both"<<endl;
else if(f_count==n)
cout<<"front"<<endl;
else if(b_count==n)
cout<<"back"<<endl;
else
cout<<"none"<<endl;

t--;
}
return 0;
}

