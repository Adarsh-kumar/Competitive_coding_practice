#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n;
cin>>n;
long long range=100000000;
long long a;

long long i;

for(i=0;i<=range;i++)
{
a=((i)*(i+1))/2;

if(a>=n)
break;
}

if(a>n)
{
long long temp=i+(n-a);
cout<<temp<<endl;
}

else
cout<<i<<endl;

return  0;
}


