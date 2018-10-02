#include<bits/stdc++.h>
using namespace std;

int main()
{
int arr[5];
map<int,int> my_map;
int sum=0;
for(int i=0;i<5;i++)
{
cin>>arr[i];
my_map[arr[i]]++;
sum+=arr[i];
}

int ans=0;

for(int i=0;i<5;i++)
{
if(my_map[arr[i]]>=2)
{
if(my_map[arr[i]]==2)
ans=max(ans,arr[i]*2);
else
ans=max(ans,arr[i]*3);
}
}

cout<<sum-ans<<endl;

return 0;
}



