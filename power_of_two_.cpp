#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;


unordered_map<long long,long long > my_map;

for(int i=0;i<n;i++)
{
long long temp;
cin>>temp;
my_map[temp]++;
}

unordered_map<long long,bool> two;

for(int i=1;i<50;i++)
two[pow(2,i)]=1;

long long ans=0;

long long ans_temp;

for(auto it=my_map.begin();it!=my_map.end();it++)
{
for(auto it2=two.begin();it2!=two.end();it2++)
{
if(my_map.find(it2->first-it->first)!=my_map.end())
{
auto it3=my_map.find(it2->first-it->first);
if(it2->first!=2*it->first)
{
ans_temp=(it->second)*(it3->second);
ans+=ans_temp;
}
else
{
ans_temp=(it->second)*(it->second -1);
ans+=ans_temp;
}
}

}
}

cout<<ans/2<<endl;

return 0;
}






