#include<iostream>
using namespace std;

bool find_sum_x(int* arr,int n,int x)
{
int l,r;
l=0;
r=n-1;
while(l<r)
{
if(arr[l]+arr[r]==x)
return 1;
else
{
if(arr[l]+arr[r]>x)
r--;
else
l++;
}
}
if(l==r)
return -1;
}
int main()
{
int arr[]={0,1,2,3,4,5};
int x;
int ans=find_sum_x(arr,6,5);
cout<<"here is the answer"<<ans;
return 0;
}
