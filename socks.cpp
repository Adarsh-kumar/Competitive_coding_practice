#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

unordered_map<int,bool> my_map;

int count=0;

int ans=INT_MIN;

for(int i=0;i<2*n;i++)
{
int temp;
cin>>temp;
if(my_map[temp]==0)
{
my_map[temp]=1;
count++;
ans=max(ans,count);
}
else
{
count--;
}
}
cout<<ans<<endl;

return 0;
}


