#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int t;
long long a,b;
cin>>t;
while(t--)
{
cin>>a>>b;
if(abs(a-b)==2)
cout<<"YES"<<endl;
else if(abs(a-b)==1)
{
if(a%2==0)
{
if(a>b)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
else
{
if(b>a)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
}
else
cout<<"NO"<<endl;

}

return 0;
}

