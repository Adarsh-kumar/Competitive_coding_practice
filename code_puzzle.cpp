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
int min(int a,int b)
{
if(a<b)
return a;
else
return b;
}
int main()
{
int t,n,m;
cin>>n>>m;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int best=100000;
sort(arr,arr+n);
for(int i=0;i<n-m;i++)
{
best=min(best,arr[m+i-1]-arr[i]);
}
cout<<best;
return best;
}
