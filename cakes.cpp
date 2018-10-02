#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,a,b;
cin>>n>>a>>b;
int minimum=min(a,b);
int maximum=max(a,b);

int lo=1,hi=n-1;
bool flag=0;
while(lo<hi)
{
int x=lo+(hi-lo)/2;
if(minimum/lo==maximum/(n-lo))
{
flag=1;
cout<<minimum/lo<<endl;
break;
}
else if(minimum/lo>maximum/(n-lo))
{
if(lo==x)
{
if(lo>1)
cout<<max(min(minimum/(lo-1),maximum/(n-lo-1)),min(minimum/lo,maximum/(n-lo)));
else
cout<<min(minimum/(lo),maximum/(n-lo));
//cout<<max(min(max(minimum/(lo+1),maximum/(hi)),max(minimum/lo,maximum/high-1)))<<endl;
flag=1;
break;
}
else
lo=x;
}
else
hi=x-1;
}
if(!flag)
cout<<minimum/lo<<endl;

return 0;
}


