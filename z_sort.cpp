#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
long long arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

sort(arr,arr+n);

int l=0;
int r=n-1;

long long arr2[n];

int i=1;

arr2[0]=arr[l];
l++;

while(l<=r)
{

if(i%2!=0)
{
arr2[i]=arr[r];

if(arr2[i]<arr2[i-1])
{
cout<<"Impossible"<<endl;
return 0;
}
r--;
}

else 
{
arr2[i]=arr[l];

if(arr2[i]>arr2[i-1])
{
cout<<"Impossible"<<endl;
return 0;
}
l++;

}

i++;

}

for(int i=0;i<n;i++)
cout<<arr2[i]<<" ";

return 0;
}


