#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
map<string ,int> frequency;
int n;
cin>>n;
string temp1,temp2;
for(int i=0;i<n;i++)
{
cin>>temp1>>temp2;
if(temp1!=temp2)
frequency[temp2]+=frequency[temp1]+1;
}

for(auto it=frequency.begin();it!=frequency.end();it++)
{
cout<<it->first<<" "<<it->second<<endl;
}

return 0;
}

