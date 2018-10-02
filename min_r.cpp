#include<bits/stdc++.h>
using namespace std;

long long a[100005];
long long b[100005];

int n,m;

int go_binary(long long val)
{
int lo=0;
int hi=n;

while(lo<hi)
{
int mid=lo+(hi-lo)/2;

if(a[mid]==val)
return mid;

else if(a[mid]>val)
hi=mid;

else
lo=mid+1;

}

return lo;
}



int helper_function(long long r)
{

int l=INT_MAX;
int ri=INT_MIN;

for(int i=0;i<n-1;i++)
{
l=min(l,go_binary(b[i]-r));
ri=max(ri,go_binary(b[i]+r));
}

if(l<=0&&ri>=n-1)
return 1;

return 0;
}



/*int helper_function2(long long r)
{
if(b[m-1]+r<a[n-1])
return 0;

for(int i=n-1;i>1;i++)
{
if((go_binary(b[i]-r)>go_binary(b[i-1]+r))&&(go_binary(b[i]-r)>0))
return 0;
}

return 1;
}

long long find_r2(void)
{
long long lo=abs(b[m-1]-a[n-1]);

long long hi=1000000005;

while(lo<hi)
{
long long mid=lo+(hi-lo)/2;

if(helper_function2(mid))
hi=mid;

else
lo=mid+1;
}

return lo;
}*/




long long find_r(void)
{
long long lo=abs(b[m-1]-a[n-1]);

long long hi=1000000005;

while(lo<hi)
{
long long mid=lo+(hi-lo)/2;

if(helper_function(mid))
hi=mid;

else
lo=mid+1;
}

return lo;
}


int main()
{

cin>>n>>m;

for(int i=0;i<n;i++)
cin>>a[i];

for(int i=0;i<m;i++)
cin>>b[i];

cout<<find_r();

return 0;
}
