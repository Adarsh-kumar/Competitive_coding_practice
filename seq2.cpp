#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;

cin>>n;

int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

map<int,int> my_map;

for(int i=0;i<n;i++)
my_map[arr[i]]++;

int c=0;

for(auto it=my_map.begin();it!=my_map.end();it++)
{
if(it->second>1)
c++;
}

if(c==0)
{
cout<<n<<endl;
sort(arr,arr+n,greater<int>());
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";

return 0;
}

else
{
auto it=my_map.begin();
int size;

if(c==my_map.size())
size=(c*2-1);
else
size=(c*2+(my_map.size()-c));

cout<<size<<endl;

int l=0;
int r=size-1;
int ans[size];

while(l<=r)
{

if(it->second>1)
{

ans[l]=it->first;
if(r<size-1&&ans[r+1]==it->first)
{
it++;
ans[r]=it->first;
}
else
ans[r]=it->first;

l++;
r--;
it++;
}

else
{
ans[l]=it->first;
l++;
it++;
ans[r]=it->first;
r--;
my_map[it->first]--;
if(it->second==0)
it++;
}

}

for(int i=0;i<size;i++)
cout<<ans[i]<<" ";

}

return 0;
}


