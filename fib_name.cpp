#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int binary_search(signed long long arr[],int start,int end,int finder)
{
int mid=start+(end-start)/2;
if(arr[mid]==finder)
return mid;
else if(start==end)
{
if(arr[start]==finder)
return start;
else
return -1;
}
else if(arr[mid]>finder)
return (binary_search(arr,start,mid,finder));
else
return(binary_search(arr,mid+1,end,finder));
}

int main()
{
int n;
cin>>n;
vector<char> arr(n+1);
signed long long fib[n+1];

for(int i=1;i<n+1;i++)
{
if(i==1||i==2)
fib[i]=1;
else
fib[i]=fib[i-1]+fib[i-2];
}

for(int i=1;i<n+1;i++)
{
if(binary_search(fib,1,n+1,i)!=-1)
arr[i]='O';
else
arr[i]='o';
}

for(int i=1;i<n+1;i++)
cout<<arr[i];


cout<<endl<<fib[n];
return 0;

}


