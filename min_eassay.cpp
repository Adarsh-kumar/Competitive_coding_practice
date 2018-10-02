#include<bits/stdc++.h>

using namespace std;

typedef struct node
{
long long  g;
long long e;
}node;

bool comp(node a ,node b)
{
return a.e<b.e;
}

int main()
{

long long n,m_g,a;

cin>>n>>m_g>>a;

node arr[n];

long long current=0;
for(int i=0;i<n;i++)
{
cin>>arr[i].g>>arr[i].e;
current+=arr[i].g;
arr[i].g=m_g-arr[i].g;
}

sort(arr,arr+n,comp);
long long ans=1000000000000000;

int l=0;
int r=0;
long long c_p=0;

long long a_t=a*n;
long long temp=0;

if(current<a_t)
{
while(l<n&&r<n)
{
if(current+arr[r].g>(a_t))
temp=(a_t-current);
else
temp=arr[r].g;
while(r<n&&current+temp<=a_t)
{
current+=temp;
c_p+=arr[r].e*(temp);
r++;
if(current==a_t)
break;

if(current+arr[r].g>(a_t))
temp=(a_t-current);
else
temp=arr[r].g;
}

ans=min(ans,c_p);
current-=temp;
l++;
}
cout<<ans<<endl;
}
else
cout<<0<<endl;

return 0;
}


