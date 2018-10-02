#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

long long arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int count=0;
int l=0;
int r=1;

int ans=INT_MIN;

while(l<n)
{
while(r<n)
{
if(arr[r]>arr[r-1])
r++;
else
break;
}
ans=max(ans,r-l);
l=r;
r=r+1;
}

cout<<ans<<endl;

return 0;
}


