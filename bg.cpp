#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m;
cin>>n>>m;

if(n>m)
{
while(n>0&&m>0)
{
cout<<"B";
n--;
cout<<"G";
m--;
}
while(n--)
cout<<"B";
while(m--)
cout<<"G";
}

else
{
while(n>0&&m>0)
{
cout<<"G";
n--;
cout<<"B";
m--;
}
while(n--)
cout<<"B";
while(m--)
cout<<"G";
}

return 0;
}

