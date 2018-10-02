#include<bits/stdc++.h>
using namespace std;

int check_it(int n,int m)
{
if(n>m)
return n-m;
if(n<=0)
return INT_MAX;
if((n-1)==m||(n*2)==m)
return 1;
else
return 0;
}


int get_depth(int n,int m)
{
if(check_it(n,m)!=0)
return check_it(n,m);
else 
return (min(1+get_depth(n-1,m),1+get_depth(n*2,m)));
}


int main()
{
int n,m;
cin>>n>>m;

if(n==m)
return 0;

else
cout<<get_depth(n,m)<<endl;

return 0;
}
