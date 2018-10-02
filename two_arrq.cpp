#include<bits/stdc++.h>
using namespace std;


int binary_search(long long arr[],long long val,int lo,int hi)
{


while(lo<hi)
{
int mid=lo+(hi-lo)/2;

if(arr[mid]<=val)
lo=mid+1;

else 
hi=mid;

}
if(arr[lo]==val)
return lo+1;
else
return lo;
}

int main()
{
int n,m;
cin>>n>>m;

long long  arr[n];
long long  arr2[m];

for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=0;i<m;i++)
cin>>arr2[i];

sort(arr,arr+n);
int start=0;
for(int i=0;i<m;i++)
{
int temp=binary_search(arr,arr2[i],start,n);
arr2[i]=temp;
}

for(int i=0;i<m;i++)
cout<<arr2[i]<<" ";

return 0;
}

