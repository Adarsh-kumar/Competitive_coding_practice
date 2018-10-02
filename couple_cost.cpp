#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m;
cin>>n>>m;

long long arr[n][m];

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cin>>arr[i][j];
}
}

long long max_min=INT_MIN;

for(int i=0;i<n;i++)
{
long long mini=1000000005;

for(int j=0;j<m;j++)
{
mini=min(mini,arr[i][j]);
}
max_min=max(max_min,mini);
}

cout<<max_min<<endl;

return 0;}


