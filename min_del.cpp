#include<bits/stdc++.h>
using namespace std;
#define maxn 100005

int main()
{
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
}

sort(arr,arr+n);

int ans=INT_MAX;

int l=0;
int r=n-1;

while(arr[l]*2<arr[r]&&l<n)
{
l++;
}

ans=min(ans,l);
 l=0;

while(arr[r]>arr[l]*2&&r>0)
{
r--;
}

ans=min(n-1-r,ans);

cout<<ans<<endl;

return 0;
}

