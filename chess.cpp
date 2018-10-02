#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,q;
cin>>n>>q;
int l,r;
while(q--)
{
cin>>l>>r;

int index=(l+r)/2;

if((l+r)%2!=0)
cout<<(n*n)/2 +index<<endl;

else
cout<<index<<endl;
}

return 0;}

