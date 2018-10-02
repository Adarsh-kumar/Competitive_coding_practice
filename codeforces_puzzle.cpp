#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int max_finder(int* arr,int n)
{
sort(arr,arr+n);
return(arr[n-1]-arr[0]);
}
int main()
{
int t,n,m;
cin>>n>>m;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
sort(arr,arr+n);
int heigher=max_finder(arr,n);
int current_load;
int lo=0;
int ans;
while(lo<heigher)
{
int x=lo+(heigher-lo)/2;
current_load=arr[0];
 int no_workers=1;

for(int i=1;i<n;i++)
{
if(arr[i]-current_load>=x)
{
no_workers++;
current_load=arr[i];
}
}
if(no_workers>=m)
lo=x+1;
else
heigher=x;
}
cout<<lo-1;
return 0;
}
