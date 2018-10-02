#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
int n,k;

cin>>n>>k>>s;

map<char,int> my_map;


for(int i=0;i<s.size();i++)
{
my_map[s[i]]++;
}

int mul=INT_MAX;

for(int i=0;i<k;i++)
{
mul=min(my_map[char('A'+i)],mul);
}

cout<<mul*k<<endl;

return 0;}

