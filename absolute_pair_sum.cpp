#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int abs_dif(int arr1[],int arr2[],int n)
{
sort(arr1,arr1+n);
sort(arr2,arr2+n);
int ans=0;
for(int i=0;i<n;i++)
{
ans+=abs(arr1[i]-arr2[i]);
}
 
return ans;
}


int main()
{
    // Both a[] and b[] must be of same size.
     int a[] = {4, 1, 8, 7};
    int b[] = {2, 3, 6, 5};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<" "<<abs_dif(a,b,n);
    return 0;
}
