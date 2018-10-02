#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n,k;
cin>>n>>k;

map<int ,bool> my_map;

for(long long i=1;i<=k;i++)
{
if(my_map.find(n%i)!=my_map.end())
{
cout<<"NO"<<endl;
return 0;
}
else
my_map[n%i]=1;
}

cout<<"YES"<<endl;

return 0;
}

