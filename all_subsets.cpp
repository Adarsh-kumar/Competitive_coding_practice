#include<iostream>
#include<vector>
#include <queue>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,k,z;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=0;i<pow(2,n);i++)
{
//if(__builtin_popcount(i)!=k)
//continue;
for(int j=0;j<n;j++)
{
int z;
z=1<<j;

if(z&i)
{
cout<<arr[j]<<" ";
}
}
cout<<endl;
}
}



