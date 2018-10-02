#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
int m;
cin>>s>>m;

while(m--)
{
int l,r,k;
cin>>l>>r>>k;

k%=((r-l)+1);

if(k>0)
{
string left=s.substr(0,l-1);
string right=s.substr(r,s.size()-r);

l--;
r--;

int size=(r-l)+1;

string suf=s.substr(l,size-k);
string pre=s.substr(l+(size-k),k);

s=left+pre+suf+right;

}

}

cout<<s<<endl;

return 0;
}


