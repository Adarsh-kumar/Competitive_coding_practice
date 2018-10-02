#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,m;
cin>>n>>m;

long long arr1[n];
long long arr2[n];

for(int i=0;i<n;i++)
cin>>arr1[i];

for(int i=0;i<m;i++)
cin>>arr2[i];

sort(arr1,arr1+n);
sort(arr2,arr2+m);

if(arr1[n-1]<=0&&arr2[m-1]<=0)
cout<<arr1[1]*arr2[0]<<endl;

else if(arr1[n-1]<=0&&arr2[0]>0)
cout<<arr1[n-2]*arr2[0]<<endl;

else if(arr1[0]>=0&&arr2[m-1]<=0)
cout<<arr1[1]*arr2[m-1]<<endl;

else
cout<<arr1[n-2]*arr2[m-1]<<endl;

return 0;
}




