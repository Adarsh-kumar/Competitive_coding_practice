#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;

map<char,int> my_map;

for(int i=0;i<s.size();i++)
my_map[s[i]]++;

char arr[s.size()];
int size=s.size()-1;
int l=0;
bool flag=1;

int current=my_map.begin()->second;

for(auto it=my_map.begin();it!=my_map.end();)
{
if(l<=(size-l))
{
if(current>1)
{
arr[l]=it->first;
arr[size-l]=it->first;
current-=2;
l++;
}
else if(current==1)
{
arr[l]=it->first;
arr[size-l]=it->first;
current-=1;
l++;
}
if(current==0)
{
it++;
current=it->second;
}

}
else
it++;

}

for(int i=0;i<s.size();i++)
{
cout<<arr[i];
}

return 0;
}

