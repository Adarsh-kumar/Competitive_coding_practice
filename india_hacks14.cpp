#include <bits/stdc++.h>
#define sum 15000000+1

using namespace std;

int main()
{
int t;
string text,pattern;
cin>>t;
while(t--)
{

cin>>pattern;
cin>>text;
bool flag=0;
map<char,int> text_map;
map<char,int> pattern_map;
int count=0;
for(int i=0;i<text.size();i++)
pattern_map[pattern[i]]++;

for(int i=0;i<=text.size()-pattern.size();i++)
{
text_map.clear();
for(int j=0;j<pattern.size();j++)
{
text_map[text[j+i]]++;
}
for(int i=0;i<pattern.size();i++)
{
if(text_map.find(pattern[i])!=text_map.end())
{
if(text_map[pattern[i]]==pattern_map[pattern[i]])
count++;
}
}
if(count==pattern.size())
{
flag=1;
cout<<"YES"<<endl;
break;
}
}

if(!flag)
cout<<"NO"<<endl;
}
return 0;
}



