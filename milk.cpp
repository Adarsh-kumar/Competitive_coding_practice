#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;

cin>>n;

bool arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int p[n+1];
int s[n+1];

p[0]=0;

for(int i=0;i<n;i++)
{
if(arr[i]==0)
p[i+1]=p[i]+1;
else
p[i+1]=p[i];
}

s[n]=0;

for(int i=n-1;i>=0;i--)
{
if(arr[i]==0)
s[i]=s[i+1]+1;
else
s[i]=s[i+1];
}



long long ans=0;

for(int i=0;i<n;i++)
{
if(arr[i]==1)
ans+=s[i+1];
}

long long ans2=0;

for(int i=n-1;i>=0;i--)
{
if(arr[i]==0)
ans2+=(i)-p[i];
}




cout<<min(ans,ans2)<<endl;

return 0;
}





