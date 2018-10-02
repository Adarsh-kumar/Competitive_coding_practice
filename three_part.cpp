#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

long long prev=0;

long long sum[n+1];
sum[0]=0;
long long temp;

unordered_map<long long ,long long > my_map;

for(int i=0;i<n;i++)
{
cin>>temp;
sum[i+1]=sum[i]+temp;
my_map[sum[i+1]]++;
}


long long final_ans=0;


for(auto it=my_map.begin();it!=my_map.end();it++)
{
long long count=1;
long long sec=(it->first)*2;
long long last=(it->first)*3;
if(my_map.find(sec)!=my_map.end()&&(sum[n]==(it->first)*3))
{
if(sec==0)
{
long long temp=my_map[sec]-1;
count=(temp*(temp-1))/2;
}
else
count*=(my_map[sec]*my_map[last]);

final_ans+=count;
}

}


cout<<final_ans<<endl;

return 0;
}

