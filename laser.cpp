#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n,k;
cin>>n>>k;

long long arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int l=0,r=0;
float ans=0;
float temp=0;
int idx1,idx2;
while(l<n)
{
while(r<n-1 &&arr[r+1]-arr[l]<=k)
{
r++;
temp=(float(arr[r]-arr[l+1])/(arr[r]-arr[l]));
}
if(double(temp)>double(ans))
{
idx1=l;
idx2=r;
ans=max(ans,temp);
}
l++;
}
cout.precision(20);
if(ans==0)
cout<<-1<<endl;
else
cout << (double)(arr[idx2] - arr[idx1+1]) / (arr[idx2] - arr[idx1]) << endl;


return 0;
}

