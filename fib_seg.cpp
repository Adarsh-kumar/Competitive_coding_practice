#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

long long arr[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
}


int l=0;
int r=1;

int ans=INT_MIN;
int count=0;

if(n<=2)
cout<<n<<endl;

else
{
while(l<n)
{
count=2;
while(r<n-1&&arr[r+1]==arr[l]+arr[r])
{
count++;
r++;
l++;
}
ans=max(count,ans);
l=r;
r++;
}

cout<<ans<<endl;
}
return  0;
}

