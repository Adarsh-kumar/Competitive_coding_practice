#include<iostream>
#include<bits/stdc++.h>
#define inf 10000000
using namespace std;
bool comp(int a ,int b)
{
return(a>b);
}

int arr[100000];
int main()
{
int t,n,s;
cin>>t;
while(t--)
{
cin>>n>>s;
int time=(s*60);
int temp=0;
for(int i=0;i<n;i++)
{
cin>>arr[i];
temp+=arr[i];
}

if(temp<time)
{
cout<<temp<<endl;
return 0;
}
sort(arr,arr+n,comp);
for(int i=0;i<n;i++)
{
if(
}
return 0;
}

