#include<bits/stdc++.h>
using namespace std;

bool check_it(long long n,int m)
{
long long temp;
if(n<0)
{
if(m>0)
return 0;
for(int i=0;i<50;i++)
{

temp=pow(m,i);
if(temp<n)
return 0;
else if(temp==n)
return 1;
}
}
else
{
for(int i=0;i<50;i++)
{

temp=pow(m,i);
if(temp>n)
return 0;
else if(temp==n)
return 1;
}
}

}

int main() {

int n,k;

cin>>n>>k;

long long arr[n];

long long sum[n+1];

sum[0]=0;

for(int i=0;i<n;i++)
{
cin>>arr[i];
sum[i+1]=sum[i]+arr[i];
}

int size=n;

int count=0;

for(int l=1;l<=size;l++)
{
for(int i=0;i<=size-l;i++)
{
//cout<<sum[i+l]-sum[i]<<endl;
if(check_it(sum[i+l]-sum[i],k))
{
count++;
}
}

}

//cout<<check_it(-243,3)<<endl;
cout<<count<<endl;

return 0;
}

