#include<bits/stdc++.h>

using namespace std;


int main()
{
int n;
long long d;

cin>>n>>d;

long long arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int r=0;

while(abs(arr[r]-arr[n-1])>d)
{
r++;
}

int l=(n-r);

long long ans=(l*(l-1)*(l-2))/6;

long long ans1=0;
if(r>=2)
{

r++;

ans1=(r*(r-1)*(r-2))/6;
}

ans+=ans1;

cout<<ans<<endl;

return 0;
}



