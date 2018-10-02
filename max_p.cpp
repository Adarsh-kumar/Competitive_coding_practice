#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
long long arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int l=0;
int r=0;

int ans=INT_MIN;
r=0;

while(l<n)
{
while(r<n&&(arr[r]<=2*arr[l]))
{
r++;
}
ans=max(ans,(r-l));
l++;
}

cout<<ans<<endl;

return 0;
}

