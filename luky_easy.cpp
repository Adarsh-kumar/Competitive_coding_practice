#include<bits/stdc++.h>
using namespace std;

int main()
{

int n;

cin>>n;
string s;
cin>>s;

int sum[n+1];

sum[0]=0;


unordered_map<int,bool> my_map;

for(int i=0;i<n;i++)
{
sum[i+1]=sum[i]+(s[i]-48);
my_map[sum[i+1]]=1;
}

for(int i=1;i<=n;i++)
{

for(int j=2;j<=900;j++)
{

if(my_map.find(sum[i]*j)!=my_map.end())
{
bool flag=1;
if(sum[i]==0)
{
if(sum[n]==0)
{
cout<<"YES"<<endl;
return 0;
}

}


else
{
for(int k=1;k<=j;k++)
{
if(my_map.find(sum[i]*k)==my_map.end())
flag=0;
}

}

if(flag)
{
cout<<"YES"<<endl;
return 0;
}

}

}

}



cout<<"NO"<<endl;

return 0;
}

