#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
string s1,s2;
cin>>s1>>s2;
cout<<s1<<" "<<s2<<endl;
int k;
cin>>k;
map<string ,bool> my_map;

my_map[s1]=1;
my_map[s2]=1;

while(k--)
{
cin>>s1>>s2;
my_map[s1]=0;
my_map[s2]=1;

for(auto it=my_map.begin();it!=my_map.end();it++)
{
if(it->second!=0)
cout<<it->first<<" ";
}

cout<<endl;
}

return 0;}



