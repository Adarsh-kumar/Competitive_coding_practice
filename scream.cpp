#include<bits/stdc++.h>
using namespace std;

int main()
{
int a,b,c,d;
cin>>a>>b>>c>>d;
int ans=INT_MAX;

int lo=1;
int hi=10000000;
while(lo<hi)
{
int mid=lo+(hi-lo)/2;

int n=mid/a;
int m=mid/c;

int f=(n*a-m*c)+(b-d);
cout<<mid<<endl;
cout<<f<<endl;
if(f>=0)
hi=mid;
else
lo=mid+1;
}

/*if(((lo/a)*a-(lo/b)*b)!=0)
cout<<lo<<endl;
else
cout<<-1<<endl;*/

cout<<lo<<endl;

return 0;
}

