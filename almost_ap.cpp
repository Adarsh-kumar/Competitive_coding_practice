#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
int n;
cin>>n;
int count=0;
long long arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
for(int i=0;i<=n-3;i++)
{
if(abs((arr[i]+arr[i+2])/2-arr[i+1])>2)
{
cout<<-1;
return 0;
}
else if((arr[i]+arr[i+2])/2==arr[i+1])
{
if((arr[i]+arr[i+2])!=arr[i+1]*2)
{
arr[i+2]--;
count++;
}
}
else if(abs((arr[i]+arr[i+2])/2-arr[i+1])==2)
{
count+=3;
if((arr[i]+arr[i+2])/2-arr[i+1]>0)
{
arr[i]--;
arr[i+1]--;
arr[i+2]--;
}
else
{
arr[i]++;
arr[i+2]++;
arr[i+1]--;
}
}
else
{
if((arr[i]+arr[i+2])/2-arr[i+1]>0)
{
arr[i+1]--;
}
else
{
arr[i+1]++;
}
}
}

cout<<count<<endl;

for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
return 0;
}

