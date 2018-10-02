#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
string s;
cin>>s;
bool ans=0;
map<char,bool> my_map;
if(s.size()<3)
cout<<"No"<<endl;
else
{
for(int i=0;i<s.size()-2;i++)
{
my_map[s[i]]=1;
my_map[s[i+1]]=1;
my_map[s[i+2]]=1;
if(my_map.find('A')!=my_map.end()&&my_map.find('B')!=my_map.end()&&my_map.find('C')!=my_map.end())
{
ans=1;
break;
}
my_map.clear();
}

if(ans)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
return 0;
}



