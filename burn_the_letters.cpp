#include<iostream>
#include<bits/stdc++.h>
#define inf 10000000
using namespace std;
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
sort(arr,arr+n);
int l=0,r=0;
int sum=0;
int ans=inf;
int nos=inf;
int nos2=0;
while(l<n)
{
while(r<n-1&&sum+arr[r+1]<time)
{
r++;
sum+=arr[r];
}
if(sum==time)
{
nos=min(nos,(r-l)+1);
}
r++;
sum+=arr[r];
if(sum<ans)
{
nos2=(r-l)+1;
ans=min(ans,sum);
}
sum-=arr[l];
l++;
}

if(nos!=inf)
cout<<nos<<"it's  me"<<endl;
else
cout<<ans<<" "<<nos2<<"it's not me"<<endl;
}
return 0;
}




