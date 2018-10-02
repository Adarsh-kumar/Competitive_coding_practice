#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m;
cin>>n>>m;
int arr[n];
int arr2[m];

for(int i=0;i<n;i++)
cin>>arr[i];
for(int i=0;i<m;i++)
cin>>arr2[i];
int l=0,r=0;
int count=0;
while(l<n)
{
if(r<m)
{
while(r<m)
{
if(arr[l]<=arr2[r])
{
r++;
l++;
}
else if(arr[l]>arr2[r])
{
r++;
}
}
}
else 
{
count++;
l++;
}
}


cout<<count<<endl;
return 0;
}

