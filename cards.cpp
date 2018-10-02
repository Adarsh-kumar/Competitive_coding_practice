#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int  main()
{
int t,n;
cin>>t;
while(t--)
{
cin>>n;
int arr1[n],arr2[n];
for(int i=0;i<n;i++)
{
cin>>arr1[i];
}
for(int i=0;i<n;i++)
{
cin>>arr2[i];
}
sort(arr1,arr1+n);
sort(arr2,arr2+n);

int j=0;
for(int i=0;i<n;i++)
{
if(arr1[i]>arr2[j])
j++;
}

cout<<j<<endl;
}
return 0;
}

