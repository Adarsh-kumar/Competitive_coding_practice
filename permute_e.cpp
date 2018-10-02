#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
int n;
cin>>n;
unordered_map<long long,int> my_map;
long long temp;

for(int i=0;i<n;i++)
{
cin>>temp;
my_map[temp]++;
}

int count=0;

for(int i=1;i<=n;i++)
{
if(my_map.find(i)==my_map.end())
count++;
}

cout<<count<<endl;

}

return 0;
}


