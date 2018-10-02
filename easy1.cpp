#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;

map<char,int> my_map;

for(int i=0;i<s.size();i++)
my_map[s[i]]++;

int ans=INT_MAX;

string temp="Bulbasaur";

map<char,int> temp_map;

for(int i=0;i<temp.size();i++)
temp_map[temp[i]]++;

for(int i=0;i<temp.size();i++)
{
if(my_map.find(temp[i])!=my_map.end()&&my_map[temp[i]]>=temp_map[temp[i]])
ans=min(ans,my_map[temp[i]]/temp_map[temp[i]]);
else
{
ans=INT_MAX;
break;
}
}

if(ans==INT_MAX)
ans=0;

cout<<ans<<endl;

return 0;
}

