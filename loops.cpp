#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,m;
cin>>n;

vector<int > ans;

while(n)
{
if(n>1)
{
ans.push_back(8);
n-=2;
}
else
{
ans.push_back(0);
n--;
}
}

long long final_ans=0;
int temp=ans.size()-1;


for(int i=0;i<ans.size();i++)
{
//cout<<ans[i]<<endl;
final_ans+=int(ans[i])*(pow(10,temp));
temp--;
}
cout<<final_ans<<endl;

return 0;
}
