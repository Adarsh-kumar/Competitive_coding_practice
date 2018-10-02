#include<bits/stdc++.h>
using namespace std;

int main()
{
long long m,n;
cin>>m>>n;

int  r1,r2;
int a1,a2,a3,b1,b2,b3;
a1=a2=a3=b1=b2=b3=0;

while(m%2==0)
{
a1++;
m/=2;
}

while(m%3==0)
{
a2++;
m/=3;
}

while(m%5==0)
{
a3++;
m/=5;
}


while(n%2==0)
{
b1++;
n/=2;
}

while(n%3==0)
{
b2++;
n/=3;
}

while(n%5==0)
{
b3++;
n/=5;
}

if(m!=n)
cout<<-1<<endl;

else
cout<<abs(a1-b1)+abs(a2-b2)+abs(a3-b3)<<endl;

return 0;
}

