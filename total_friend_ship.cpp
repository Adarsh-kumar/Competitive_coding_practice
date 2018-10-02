#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef struct person
{
long long money;
long long  value;
}person;

bool comparator(person aa ,person b)
{
return (aa.money<b.money);
}

int main()
{
long long n,k;
cin>>n>>k;
person arr[n];
for(int i=0;i<n;i++)
cin>>arr[i].money>>arr[i].value;
sort(arr,arr+n,comparator);
int l=0,r=0;
long long  ans=0;
long long sum=0;
while(l<=r)
{
while(r<n&&arr[r].money-arr[l].money<k)
{
sum+=arr[r].value;
r++;
}
ans=max(ans,sum);
sum-=arr[l].value;
l++;
}
cout<<ans<<endl;
return 0;
}


