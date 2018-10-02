#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
int n;
long long k;
cin>>n>>k;

long long temp;

for(int i=0;i<n;i++)
{
cin>>temp;
if(temp<=k)
{
k-=temp;
cout<<1;
}
else
cout<<0;
}

cout<<endl;
}


return 0;
}

