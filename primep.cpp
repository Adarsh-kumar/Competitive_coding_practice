#include<bits/stdc++.h>
using namespace std;

bool prime[45005];


int main()
{
int n;

cin>>n;

prime[1]=0;

for(int i=2;i<=45000;i++)
{
if(!prime[i])
for(int j=2*i;j<=45000;j+=i)
prime[j]=1;
}

int i;
long long sum=(n*(n+1))/2;

if(prime[sum]==0)
cout<<"No"<<endl;



else
{
cout<<"Yes"<<endl;

for(i=3;i<=sqrt(sum);i++)
{
if(sum%i==0)
break;
}

long long size=sum/i;

bool visited[45005];

long long current_sum=0;

if(size<=n)
{

cout<<1<<" "<<n-1<<endl;

cout<<size<<" ";

for(int i=1;i<=n;i++)
{
if(i!=size)
cout<<i<<" ";
}

}

else
{
vector<int> ans(45000);

int count=0;

for(int j=n;j>=1;j--)
{

if(size-j>=0)
{
ans[count]=j;
count++;

visited[j]=1;

if(size-j==0)
break;

size-=j;
}

else
{
ans[count]=size;
count++;
visited[size]=1;
break;
}

}

cout<<"i am here"<<endl;
cout<<count<<" "<<n-(count)<<endl;

for(int i=0;i<count;i++)
{
cout<<ans[i]<<" ";
}

for(int i=1;i<=n;i++)
{
if(!visited[i])
cout<<i<<" ";
}

}

}

return 0;
}


