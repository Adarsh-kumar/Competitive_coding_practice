#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m;
cin>>n>>m;

int arr[m];

for(int i=0;i<m;i++)
cin>>arr[i];

int current=1;

long long ans=0;

for(int i=0;i<m;i++)
{
if(arr[i]>=current)
{
ans+=(arr[i]-current);
}
else
{
ans+=(n-(current-arr[i]));
}

current=arr[i];

}

cout<<ans;

return 0;
}

