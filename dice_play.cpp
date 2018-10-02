#include<bits/stdc++.h>
using namespace std;

int main()
{
int a,b;

cin>>a>>b;

int x,y,z;

y=0;

if(a==b)
{
x=0;
y=6;
z=0;
}

else 
{
if((a+b)%2==0)
y=1;


if(a<b)
{
x=(a+b)/2-y;
z=(6-x-y);
}

else
{
z=(a+b)/2-y;
x=(6-x-z);
}

}

cout<<x<<" "<<y<<" "<<z<<endl;

return 0;
}

