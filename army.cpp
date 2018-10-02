#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binary_search(long long arr[],int start,int end,long long a)
{
int mid=start+(end-start)/2;
if(start==end)
return start;
else if(arr[mid]==a)
return mid;
else if(arr[mid]>a)
return(binary_search(arr,start,mid,a));
else
return(binary_search(arr,mid+1,end,a));
}


int main()
{

int n,m;
cin>>n>>m;
long long arr1[n],arr2[m];

long long sum[n];

for(int i=0;i<n;i++) 
{
cin>>arr1[i];
if(i>0)
sum[i]=arr1[i]+sum[i-1];
else
sum[i]=arr1[i];
}

for(int i=0;i<m;i++) 
cin>>arr2[i];

int current,start=0;
int last=n-1;
int r=0;
for(int k=0;k<m;k++)
{
current=binary_search(sum,start,last,arr2[k]+r);
r=arr2[k]-sum[current];
if(r==0)
current++;
if(current==n||(current==n-1&&r>0))
{
r=0;
current=0;
}
start=current;
cout<<last-current+1<<endl;
}
return 0;
}
