#include<bits/stdc++.h>
using namespace std;


int n;

bool hold[5*100005];

int go_binary(int val,long long  arr[])
{

long long  lo=0;
long long  hi=n;

while(lo<hi)
{
long long  mid=lo+(hi-lo)/2;

if(arr[mid]<val||hold[mid]==1)
lo=mid+1;
else if(arr[mid]>=val)
hi=mid;
}

if(lo==n)
return -1;
else
{
hold[lo]=1;
return lo;
}
}

int main()
{
cin>>n;

long long arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];


sort(arr,arr+n);


bool visited[n];

memset(visited,1,sizeof(visited));

memset(hold,0,sizeof(hold));


for(int i=0;i<n;i++)
{

if(visited[i]==1)
{
int temp=go_binary(2*arr[i],arr);
if(temp!=-1)
visited[i]=0;
}

}


int count=0;

for(int i=0;i<n;i++)
{
if(visited[i])
count++;
}


cout<<count<<endl;

return 0;
}

