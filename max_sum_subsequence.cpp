#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int max_sum(int arr[],int n)
{
int lis[n];
for(int i=0;i<n;i++)
{
if(i==0)
lis[i]=arr[0];
else
{
if(arr[i]>arr[i-1])
lis[i]=lis[i-1]+arr[i];
else
{
lis[i]=lis[i-1];
}
}
}
cout<<lis[n-1];
return lis[n-1];
}

int main()
{
    int arr[] = {1, 101, 2, 3, 100, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< "Sum of maximum sum increasing subsequence is ",
           max_sum( arr, n ) ;
    return 0;
}
