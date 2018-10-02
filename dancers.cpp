#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m;
cin>>n>>m;

map<int,int> my_map;

bool tempbool[3];

for(int i=0;i<m;i++)
{
memset(tempbool,0,sizeof(tempbool));
for(int j=0;j<3;j++)
{
int temp;
cin>>temp;

if(my_map.find(temp)==my_map.end())
{

for(int k=0;k<3;k++)
{
if(tempbool[k]==0)
{

tempbool[k]=1;
my_map[temp]=k+1;
break;

}

}
}
else
tempbool[my_map[temp]-1]=1;

}
}


for(int i=1;i<=n;i++)
{
cout<<my_map[i]<<" ";
}

return 0;
}

