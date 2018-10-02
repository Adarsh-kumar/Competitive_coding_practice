#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

map<int,int> my_map;

for(int i=0;i<n;i++)
my_map[arr[i]]++;

int count=0;
bool flag=1;

for(int i=1;i<=100;i++)
{
if(my_map.find(i)!=my_map.end())
{
if(my_map[i]==1)
count++;
}
}

//cout<<count<<endl;

if((count%2)!=0)
{
bool checker=0;
for(auto it=my_map.begin();it!=my_map.end();it++)
{
if(it->second>2)
{
my_map[it->first]=105;
checker=1;
}
}
if(!checker)
{
cout<<"NO"<<endl;
return 0;
}

}

else
{
cout<<"YES"<<endl;
int b_turn=0;

for(int i=0;i<n;i++)
{

if(my_map[arr[i]]==1)
{

if(flag)
{
flag=0;
cout<<"A";
}
else
{
flag=1;
cout<<"B";
}

}

else if(my_map[arr[i]]==105&&b_turn==0)
{
cout<<"B";
b_turn=1;
}

else
cout<<"A";
}
cout<<endl;
}

return 0;
}

