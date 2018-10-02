#include<bits/stdc++.h>

using namespace std;

string oc_build(int n)
{
string s="";

string s1="(";

string s2=")";

for(int i=0;i<n;i++)
{
s+=s1+s2;
}

return s;
}

string o_build(int n)
{
string s="";

string s1="(";

string s2=")";

for(int i=0;i<n;i++)
{
s+=s1;
}
for(int i=0;i<n;i++)
{
s+=s2;
}

return s;

}

int main()
{
int n,m;
string s;
cin>>n>>m>>s;
if(n==m)
cout<<s;
else
{
int k;
for(k=m/2;k>=0;k--)
{
string temp=o_build(k);
std::size_t found = s.find(temp);
if (found!=std::string::npos)
{
break;
}

}

string left=oc_build(m/2-k)+o_build(k);
cout<<left<<endl;


}
return 0;
}



