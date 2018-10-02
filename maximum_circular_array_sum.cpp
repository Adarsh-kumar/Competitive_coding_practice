#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maximum_circular_array_sum(int arr[],int n)
{
int arr2[n];
sort(arr,arr+n);
int start=0,end=n-1;
for(int i=0;i<n;i+=2)
{
arr2[i]=arr[start];
if((i+1)<n)
{
arr2[i+1]=arr[end];
}
start++;
end--;
}

int ans=0;
for(int i=0;i<n-1;i++)
{
ans+=abs(arr2[i+1]-arr2[i]);
}
ans+=abs(arr2[n-1]-arr2[0]);

for(int j=0;j<n;j++)
cout<<arr2[j]<<"  ";
return ans;
}

// Driver Program
int main()
{
    int arr[] = { 10, 12, 15 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maximum_circular_array_sum(arr, n) << endl;
    return 0;
}

