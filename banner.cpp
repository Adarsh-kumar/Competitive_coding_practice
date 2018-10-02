#include<bits/stdc++.h>
using namespace std;

int main()
{

string s;
cin>>s;

int l=0;
int r=0;

string s2="CODEFORCES";
int count=0;

while(l<s.size())
{
if(s[l]==s2[r]&&count<10)
{
r++;
count++;
}
l++;
}

if(count==10)
cout<<"YES"<<endl;

else
cout<<"NO"<<endl;

return 0;
}

