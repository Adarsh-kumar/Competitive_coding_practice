#include<iostream>
#include<bits/stdc++.h>

bool get_divisor(long long a,long long p)
{
long long limit;
if(p<sqrt(a))
limit=p;
else
limit=sqrt(a);

for(int i=2;i<=limit;i++)
{
if(a%i==0)
return 1;
}
return 0;
}


using namespace std;
int main()
{
long long p,y;
cin>>p>>y;

while(y>p)
{
if(!get_divisor(y,p))
{
cout<<y<<endl;
return 0;
}
y--;
}

cout<<-1<<endl;
return 0;
}




