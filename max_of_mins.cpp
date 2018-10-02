#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,k;
cin>>n>>k;
long long arr[n];
long long maximum=INT_MIN;
long long minimum=INT_MAX;
long long maximum_index,minimum_index;
long long ans1=INT_MAX;
long long ans2=INT_MAX;

for(int i=0;i<n;i++)
{
cin>>arr[i];
if(arr[i]>maximum)
{
maximum_index=i;
maximum=arr[i];
}
if(arr[i]<minimum)
{
minimum_index=i;
minimum=arr[i];
}
}

if(k==1)
cout<<minimum<<endl;
else if(k>2)
cout<<maximum<<endl;
else 
{
cout<<max(arr[0],arr[n-1])<<endl;
}

return 0;
}

