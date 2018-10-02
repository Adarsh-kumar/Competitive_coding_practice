#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int max_finder(int* arr,int n)
{
sort(arr,arr+n);
return(arr[n-1]);
}
int main()
{
int t,n,m;
cin>>n>>m;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int heigher=10000000,current_load;
int lo=max_finder(arr,n);
while(lo<heigher)
{
int x=lo+(heigher-lo)/2;
current_load=0;
 int no_workers=1;
for(int i=0;i<n;i++)
{
if(current_load+arr[i]<=x)
{
current_load+=arr[i];
}
else
{
no_workers++;
current_load=arr[i];
}
}
if(no_workers<=m)
heigher=x;
else
lo=x+1;
}
cout<<lo;
return 0;
}
