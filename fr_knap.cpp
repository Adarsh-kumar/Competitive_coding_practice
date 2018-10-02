#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m;
cin>>n>>m;

int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

sort(arr,arr+n,greater<int>());


int i=0;
while(m>0)
{
m-=arr[i];
i++;
}

cout<<i<<endl;

return 0;
}
