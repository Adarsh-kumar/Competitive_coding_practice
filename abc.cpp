#include<bits/stdc++.h>
using namespace std;

int main()
{
long long a,b,c;

cin>>a>>b>>c;

long long x,y,z;

x=(a+b-c);

if(x>=0&&(x%2==0))
x/=2;

else
{
cout<<"Impossible"<<endl;
return 0;
}

y=b-x;

if(y<0)
{
cout<<"Impossible"<<endl;
return 0;
}

z=a-x;


if(z<0)
{
cout<<"Impossible"<<endl;
return 0;
}

if(x==0&&y==0||y==0&&z==0||x==0&&z==0)
{
cout<<"Impossible"<<endl;
return 0;
}

cout<<x<<" "<<y<<" "<<z<<endl;

return 0;
}


