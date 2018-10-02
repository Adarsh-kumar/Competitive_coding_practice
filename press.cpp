#include<bits/stdc++.h>
using namespace std;

int main()
{
int k;
cin>>k;

char temp;

map<char,int> my_map;


for(int i=0;i<4;i++)
{
for(int j=0;j<4;j++)
{
cin>>temp;
my_map[temp]++;
}
}

for(auto it=my_map.begin();it!=my_map.end();it++)
{
if(it->second>2*k&&it->first!='.')
{
cout<<"NO"<<endl;
return 0;
}
}

cout<<"YES"<<endl;

return 0;
}


