#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check_it(long long n)
{
int temp=0;

while(pow(2,temp)<=n)
{
if(pow(2,temp)==n)
return 1;
temp++;
}
return 0;
}

int main()
{
long long n;

cin>>n;

if(n==0)
cout<<0<<endl;

else if((n+1)%2==0)
cout<<(n+1)/2<<endl;
else
cout<<(n+1)<<endl;

return 0;
}

