#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool is_prime(int n)
{
for(int i=2;i<=n/2;i++)
{
if(n%i==0)
return 0;
}
 
return 1;
}

vector<int> get_primes(int n)
{

vector<int> ans;

for(int i=2;i<=n/2;i++)
{
if(is_prime(i)&&(n%i==0))
ans.push_back(i);
}

return ans;
}



int main()
{
int n;
cin>>n;

map<int,int > my_map;
vector<int> ans;

int colour=1;

bool flag;


int last_colour=0;

int final_ans=-2;

for(int i=2;i<=n+1;i++)
{
flag=0;

ans=get_primes(i);



for(int j=0;j<ans.size();j++)
{
if(my_map.find(ans[j])!=my_map.end())
{
last_colour=my_map[ans[j]];
flag=1;
}

}

if(flag)
{
my_map[i]=last_colour+1;
}

else
{
my_map[i]=colour;
}

final_ans=max(final_ans,my_map[i]);

}

cout<<final_ans<<endl;

for(map<int,int>::iterator it=my_map.begin();it!=my_map.end();it++)
{
cout<<it->second<<" ";
}

return 0;
}


