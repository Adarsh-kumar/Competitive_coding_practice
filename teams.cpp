#include<bits/stdc++.h>
using namespace std;
int n;

int gobinary(vector<long long > arr,long long val)
{
int lo=0;
int hi=2*n;

while(lo<hi)
{
int mid=lo+(hi-lo)/2;

if(arr[mid]==val)
return mid;

else if(arr[mid]>val)
hi=mid;

else
lo=mid+1;
}

}


int main()
{
cin>>n;
vector<long long > arr(n);
vector<long long > arr2(n);

for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=0;i<n;i++)
cin>>arr2[i];

vector<long long > in1=arr;
vector<long long > in2=arr2;

arr.insert(arr.end(),arr2.begin(),arr2.end());

sort(arr.begin(),arr.end());

int mask1=0;
int mask2=0;

for(int k=0;k<=n/2;k++)
{
mask1|=(1<<k);
mask2|=(1<<k);
}


for(int i=0;i<n;i++)
{
int temp=gobinary(arr,in1[i]);
int temp2=gobinary(arr,in2[i]);
if(temp<n)
mask1|=(1<<i);
if(temp2<n)
mask2|=(1<<i);
}


cout<<mask1<<endl;
cout<<mask2<<endl;

return 0;

}

