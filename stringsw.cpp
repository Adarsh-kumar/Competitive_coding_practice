#include<bits/stdc++.h>
using namespace std;


int main()
{
string s1,s2;
cin>>s1>>s2;

int count;

string ans="";

map<char,int> my_map;


for(int i=0;i<s1.size();i++)
{
if(s1[i]=='?')
count++;
else
{
my_map[s[i]]++;
ans+=s[i];
}

}


int size=s2.size();

int mul=count/size;

int r=count%size;

while(mul--)
{
ans+=s2;
}

string temp_str="";

for(char i='a',i<='z';i++)
{
if(my_map.find(i)==my_map.end())
{
temp_str+=i;
}
}

temp_str+=s2.substr(0,




