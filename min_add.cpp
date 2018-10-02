#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct data
{
int value;
int position;
};

struct data findMinElement(int arr[],int n)
{
int prefix_sum[n-1];
int sufix_sum[n-1];

struct data ans;
prefix_sum[0]=arr[0];
sufix_sum[n-1]=arr[n-1];

for(int i=1;i<n;i++)
prefix_sum[i]=arr[i]+prefix_sum[i-1];

for(int i=n-2;i>=0;i--)
sufix_sum[i]=arr[i]+sufix_sum[i+1];

int temp=INT_MAX;

for(int i=0;i<n;i++)
{
if(abs(prefix_sum[i]-sufix_sum[i+1])<temp)
{
temp=min(temp,abs(prefix_sum[i]-sufix_sum[i+1]));
if(prefix_sum[i]>sufix_sum[i+1])
ans.position=1;
else
ans.position=i+2;
}
}

ans.value=temp;
if(temp==0)
ans.position=0;
return ans;
}


int main()
{
    int arr[] = { 10, 1, 2, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    struct data values;
 
    values = findMinElement(arr, n);
    cout << "Minimum element : " << values.value<< endl << "Position : " << values.position;
    return 0;
}
