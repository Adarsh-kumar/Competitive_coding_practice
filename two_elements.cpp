#include<iostream>
using namespace std;

int main()
{
int arr[]={1,22,2,3,56};
int n=5;
int ans=-8000;
int min=arr[0];
for(int i=1;i<n;i++)
{
if(arr[i]<min)
min=arr[i];
else
{
if(arr[i]-min>ans)
ans=arr[i]-min;
}
}
cout<<" "<<ans;
return 0;
}
