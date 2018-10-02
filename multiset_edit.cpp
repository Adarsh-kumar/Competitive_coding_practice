#include<bits/stdc++.h>
using namespace std;


int main()
{
int n,d;
cin>>n>>d;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
sort(arr,arr+n);
for(int i=1;i<n;i++)
{
if(arr[i]>arr[0]+d)
{
cout<<n-i<<endl;
return 0;
}
}

cout<<0<<endl;
return 0;
}

