#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

long long arr[n];
bool visited[n+1];
long long arr2[n];
int j=0;

for(int i=0;i<=n;i++)
visited[i]=0;

for(int i=0;i<n;i++)
{
long long temp;
cin>>temp;
if(temp>0&&temp<=n&&visited[temp]==0)
visited[temp]=1;
else
{
arr2[j]=temp;
j++;
}
}


sort(arr2,arr2+j);

long long a[j];

long long ans=0;


int it=0;

for(int i=1;i<=n;i++)
{
if(visited[i]==0)
{
ans+=abs(i-arr2[it]);
it++;
}
}

cout<<ans<<endl;

return 0;
}

