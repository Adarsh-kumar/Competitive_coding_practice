#include<bits/stdc++.h>
using namespace std;

bool seive[100005];

int get_first(bool arr[],int start,int end)
{
for(int i=start;i<=i+300;i++)
{
if(seive[i]==0)
return i;
}
}

int main()
{

seive[1]=1;

for(int i=2;i<=100000;i++)
{
if(seive[i]==0)
{
for(int j=2*i;j<=100000;j+=i)
{
seive[j]=1;
}
}
}

int n,m;
cin>>n>>m;

int arr[n][m];

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cin>>arr[i][j];
}
}

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
arr[i][j]=get_first(seive,arr[i][j],100000)-arr[i][j];
}
}

int ans=INT_MAX;

for(int i=0;i<n;i++)
{
int temp=0;
for(int j=0;j<m;j++)
{
temp+=arr[i][j];
}
ans=min(ans,temp);
}

for(int i=0;i<m;i++)
{
int temp=0;
for(int j=0;j<n;j++)
{
temp+=arr[j][i];
}
ans=min(ans,temp);
}

cout<<ans<<endl;

return 0;
}





