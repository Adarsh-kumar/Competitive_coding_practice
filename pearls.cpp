#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;

ios_base::sync_with_stdio(false);
cin>>n;
long long arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int l=0;
int r=0;

map<long long ,pair<int ,int > > my_map;

vector<pair<int,int> > ans;

bool flag=0;

while(l<n)
{
my_map.clear();
flag=0;
while(r<n)
{

if(my_map.find(arr[r])!=my_map.end())
{
flag=1;
break;
}

else
{
my_map[arr[r]]=make_pair(1,r+1);
r++;
}

}

if(flag)
{
int temp1=l+1;
int temp2=r+1;

ans.push_back(make_pair(temp1,temp2));

}

l=r+1;
r=l;
}
if(ans.size()==0)
cout<<-1<<endl;
else
{
cout<<ans.size()<<endl;
for(int i=0;i<ans.size();i++)
if(i!=ans.size()-1)
cout<<ans[i].first<<" "<<ans[i].second<<endl;
else
cout<<ans[i].first<<" "<<n<<endl;
}

return 0;
}

