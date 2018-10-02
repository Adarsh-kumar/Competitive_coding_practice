#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;

cin>>n;

int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int l=0;
int r=n-1;

int s,v;
s=0;
v=0;
bool flag=1;

while(l<=r)
{
if(flag)
{
if(arr[l]>arr[r])
{
s+=arr[l];
l++;
}
else
{
s+=arr[r];
r--;
}

}
else
{
if(arr[l]>arr[r])
{
v+=arr[l];
l++;
}
else
{
v+=arr[r];
r--;
}

}
flag=1-flag;
}

cout<<s<<" "<<v<<endl;

return 0;
}

