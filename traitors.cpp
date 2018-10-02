#include<bits/stdc++.h>
using namespace std;


int main()
{
int n,m;
cin>>n>>m;

while(m--)
{
int k;
cin>>k;
unordered_map<signed int,int > my_map;
signed int temp;

int counter=0;

for(int i=0;i<k;i++)
{
cin>>temp;
if(my_map.find(temp)==my_map.end())
counter++;
my_map[temp]++;
}

int count=0;

for(auto it=my_map.begin();it!=my_map.end();it++)
{
if(my_map.find(0-it->first)==my_map.end())
count++;
}


if(count==counter)
{
cout<<"YES";
return 0;
}

}

cout<<"NO"<<endl;

return 0;}

