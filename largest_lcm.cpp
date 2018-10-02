#include<bits/stdc++.h>

using namespace std;

int main()
{

long long n;
cin>>n;

if(n<4)
{
if(n==1)
{
cout<<1;
return 0;
}
else if(n==2)
{
cout<<2;
return 0;
}
else
{
cout<<6;
return 0;
}
}

long long ans;

if(n%2==0)
ans=n*(n-1)*(n-3);
else 
ans=n*(n-1)*(n-2);

cout<<ans<<endl;

return 0;
}
