#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int min_power(int i,int r)
{
int hp=50;
int lp=2;

int x=lp+(hp-lp)/2;
if(pow(i,x)==r)
return x;
while(lp<hp)
{
x=lp+(hp-lp)/2;
if(pow(i,x)==r)
return x;
else if(pow(i,x)>r)
hp=x;
else 
lp=x+1;
}

return lp;
}


int max_power(int i,int r)
{
int hp=50;
int lp=2;
int x=lp+(hp-lp)/2;
if(pow(i,x)==r)
return x;
while(lp<hp)
{
x=lp+(hp-lp)/2;
if(pow(i,x)==r)
return x;
else if(pow(i,x)>r)
hp=x;
else 
lp=x+1;
}

return lp-1;
}



int main()
{
long long l,r;
cin>>l>>r;

int highest_power;
int lowest_power;
int x;
int ans=0;

for(int i=2;i<=sqrt(r);i++)
{
ans+=max_power(i,r)-min_power(i,l)+1-(sqrt(pow(i,max_power))-sqrt(pow(i,min_power)-1));
}
ans+=sqrt(r)-sqrt(l-1);

cout<<ans<<endl;
return 0;
}




