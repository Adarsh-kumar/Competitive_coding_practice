#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
int n;
cin>>n;

long long a[n];
long long b[n];

for(int i=0;i<n;i++)
cin>>a[i];

for(int i=0;i<n;i++)
cin>>b[i];

int count=0;

if(a[0]>=b[0])
count=1;

for(int i=1;i<n;i++)
{
if(a[i]-a[i-1]>=b[i])
count++;
}

cout<<count<<endl;
}

return 0;
}

