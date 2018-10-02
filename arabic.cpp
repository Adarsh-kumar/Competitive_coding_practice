#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;

cin>>n;
map<vector<char> ,bool> ans;

for(int i=0;i<n;i++)
{
string temp;
cin>>temp;
vector<char> temp2;
unordered_map<char,bool> my_map;

for(int j=0;j<temp.size();j++)
{
if(my_map.find(temp[j])==my_map.end())
{
my_map[temp[j]]=1;
temp2.push_back(temp[j]);
}
}

sort(temp2.begin(),temp2.end());


ans[temp2]++;

}

cout<<ans.size()<<endl;

return 0;
}

