#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m;
cin>>n;

long long arr[n];

long long suf[n];

long long sum1=0;
long long sum2=0;

long long pre[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
sum1+=arr[i];
pre[i]=sum1;
}

suf[n-1]=arr[n-1];

for(int i=n-2;i>=0;i--)
suf[i]=suf[i+1]+arr[i];


cin>>m;

long long arr2[m];

long long suf2[m];

long long pre2[n];

for(int i=0;i<m;i++)
{
cin>>arr2[i];
sum2+=arr2[i];
pre2[i]=sum2;
}

suf2[m-1]=arr2[m-1];

for(int i=m-2;i>=0;i--)
suf2[i]=suf2[i+1]+arr2[i];


if(sum1!=sum2)
cout<<-1<<endl;


else
{
int l1=0;
int l2=0;
int count=0;

int temp=min(n,m);

int mid=temp/2;


while(pre[l1]<=pre2[l2]&&l1<n&&l2<m)
{
if(pre[l1]==pre2[l2])
{
count++;
l1++;
l2++;
}

else 
{
if(n==m)
{
l1++;
l2++;
}
else if (n>m)
l1++;
else
l2++;
}

}

/*int r1=n-1;
int r2=m-1;

while(suf[r1]<=suf2[r2])
{

if(suf[r1]==suf2[r2])
{
count++;
r1--;
r2--;
}

else 
{
if(n>m)
r1--;
else
r2--;
}

}*/



cout<<count<<endl;

}

return 0;
}





