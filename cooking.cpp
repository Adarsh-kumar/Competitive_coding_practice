#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
int k,d,t;
cin>>k>>d>>t;
float temp=0;
float cooked_fraction=0;
float r;
if(k>d)
r=k%d;
else
r=d%k;
while(float(cooked_fraction)<1)
{
if(cooked_fraction+float(k)/t<=1)
{
temp+=k;
cooked_fraction=cooked_fraction+float(k)/t;
}
else
{
temp+=float(1-cooked_fraction)*t;
cooked_fraction=1;
}
if(cooked_fraction+(r/(2*t))<=1)
{
temp+=r;
cooked_fraction=cooked_fraction+(r/(2*t));
}
else
{
temp+=float(1-cooked_fraction)*2*t;
cooked_fraction=1;
}
}

cout<<std::setprecision(9)<<temp<<endl;

return 0;
}





