#include<bits/stdc++.h>

using namespace std;

int main()
{

long long n,k;
cin>>n>>k;
long long ans;

if(n>=k)
{
if(k%2!=0)
ans=k/2;
else
ans=k/2-1;
}

else 
{
ans=n-k/2;
}
if(ans>0)
cout<<ans<<endl;
else
cout<<0<<endl;
return 0;
}

