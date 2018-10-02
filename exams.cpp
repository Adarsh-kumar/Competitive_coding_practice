#include<bits/stdc++.h>
using namespace std;

bool comp(pair<long long ,long long > a,pair<long long ,long long > b)
{
int mina=min(a.first,b.first);
int minb=min(a.first,b.first);

if(mina<minb)
return a<b;
else
return b<a;
}

int main()
{
int n;
cin>>n;
pair<long ,long > arr[n];

for(int i=0;i<n;i++)
{
cin>>arr[i].first>>arr[i].second;
}

sort(arr,arr+n,comp);

cout<<min(arr[0].first,arr[0].second);

return 0;
}

