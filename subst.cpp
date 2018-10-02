#include<bits/stdc++.h>

using namespace std;


map<pair<pair<int,int> ,string>,int > my_map;

void build_map(string s)
{
my_map.clear();

for(int size=1;size<=s.size();size++)
{
for(int i=0;i<=s.size()-size;i++)
{
for(int j=i;j<i+size;j++)
{
my_map[make_pair(make_pair(i,i+size-1),s.substr(i,(j-i)+1))]++;
cout<<s.substr(i,(j-i)+1)<<endl;
}

}
}

}

int main()
{
int n,m,q;
cin>>n>>m>>q;
string s1,s2;
cin>>s1>>s2;
cout<<s1<<endl;
build_map(s1);
int u,v;
for(int i=0;i<q;i++)
{
cin>>u,v;
u--;
v--;

//for(auto it=my_map.begin();it!=my_map.end();it++)
//cout<<it->first.first.first<<" "<<it->first.first.second<<it->first.second<<" "<<my_map[it->first]<<endl;

cout<<my_map[make_pair(make_pair(0,7),"for")]<<endl;

/*if(my_map.find(make_pair(make_pair(u,v),s2))!=my_map.end())
cout<<my_map[make_pair(make_pair(u,v),s2)]<<endl;
else
cout<<0<<endl;*/
}

return 0;
}


