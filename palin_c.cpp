#include<bits/stdc++.h>
using namespace std;


bool check_it(string s)
{
int size=s.size();

int r=size/2;

int l=r-1;

bool flag=1;

while(l>=0&&r<size)
{
if(s[l]==s[r]||abs(s[l]-s[r])==2)
{
l--;
r++;
continue;
}
else
{
flag=0;
break;
}

}

return flag;
}






int main()
{
int t;
cin>>t;

while(t--)
{
int n;
cin>>n;
string s;
cin>>s;
if(check_it(s))
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}

return 0;
}

