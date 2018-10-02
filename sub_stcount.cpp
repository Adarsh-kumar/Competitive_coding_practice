#include<bits/stdc++.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
map<string,vector<int> > my_map;


for(int i=0;i<n;i++)
{
string temp1,temp2;
cin>>temp1;
map<string,bool> temp_map;


for(int size=1;size<=temp1.size();size++)
{
for(int p=0;p<=temp1.size()-size;p++)
{
temp2=temp1.substr(p,p+size-1);
if(temp_map.find(temp2)==temp_map.end())
{
temp_map[temp2]=1;
my_map[temp2].push_back(i);
}
}
}
}
int q;
cin>>q;



while(q--)
{
int l,r;
string sub;
cin>>l>>r>>sub;
if(my_map.find(sub)==my_map.end())
cout<<0<<endl;
else
{
int count=0;
for(int i=l-1;i<r;i++)
{
if(std::find(my_map[sub].begin(),my_map[sub].end(),i)!=my_map[sub].end())
count++;
}
cout<<count<<endl;
}
}

return 0;
}







