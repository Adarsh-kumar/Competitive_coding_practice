#include<bits/stdc++.h>
using namespace std;

int main()
{
string s1,s2;
ios_base::sync_with_stdio(false);

cin>>s1;
cin>>s2;

int flag=2;
if(s1.size()>s2.size())
cout<<'>'<<endl;

else if(s1.size()<s2.size())
cout<<'<'<<endl;
 

else
{
for(int i=0;i<s1.size();i++)
{
if(s1[i]==s2[i])
continue;
else if(s1[i]>s2[i])
{
flag=0;
break;
}
else
{
flag=1;
break;
}
}

if(flag==0)
cout<<'>'<<endl;

else if(flag==1)
cout<<'<'<<endl;

else
cout<<'='<<endl;
}

return 0;
}

