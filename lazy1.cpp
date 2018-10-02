#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m,k;
cin>>n>>m>>k;

int arr[n];

int count=0;

for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=0;i<n;i++)
{
if(arr[i]==1&&m>0)
m--;
else if(arr[i]==1)
count++;
else if(arr[i]==2&&k>0)
k--;
else if(arr[i]==2&&m>0)
m--;
else 
count++;
}

cout<<count<<endl;

return 0;
}
