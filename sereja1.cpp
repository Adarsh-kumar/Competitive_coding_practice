#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,d,m;
cin>>n>>d;
int sum=0;
int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];
sort(arr,arr+n);
cin>>m;


if(m<=n)
{
for(int i=0;i<m;i++)
sum+=arr[i];
cout<<sum<<endl;
}

else
{
for(int i=0;i<n;i++)
sum+=arr[i];
cout<<sum-(m-n)*d<<endl;
}

return 0;
}

