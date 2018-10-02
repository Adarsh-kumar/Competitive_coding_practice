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

cout<<arr[n-1]-arr[0]<<" ";

long long ans=arr[n-1]-arr[0];

int l=0;
int r=n-1;

long long count=0;

while(l<r)
{

long long temp1=arr[r];
long long temp2=arr[l];
int r1=r;
int l1=l;

while(arr[r]==temp1)
r--;
while(arr[l]==temp2)
l++;

if(arr[r1]-arr[l1]==ans)
{
count+=abs(r1-r)*abs(l1-l);
}
else
{
r=r1-1;
l=l1+1;
}

}

cout<<count<<endl;

return 0;
}

