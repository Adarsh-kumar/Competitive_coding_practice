#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int closest_point(int arr[],int no,int start,int end)
{
int mid=start+(end-start)/2;
if(start==end)
return(abs(arr[start]));
if(arr[mid]==no)
return(arr[mid]);
else if(arr[mid]>no)
return(arr,no-(arr[mid]-no),start,mid);
else
return(arr,no+(no-arr[mid]),mid+1,end);
}

int main()
{
int arr[]={1,3,4,5,8,9};
cout<<closest_point(arr,6,0,6);
return 0;
}

