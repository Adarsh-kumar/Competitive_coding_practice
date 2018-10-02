#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,p;
cin>>n>>p;
string s;
cin>>s;
bool ans1=1;

for(int i=0;i<p;i++)
{
if(s[i]!='.')
{
int j=1;
while((i+p*j)<s.size())
{
ans1=1;
if(s[i]!=s[i+p*j])
{
//cout<<ans1<<endl;
ans1=0;
break;
}
j++;
}
if(ans1==0)
break;
}
}
if(ans1==1)
cout<<"No"<<endl;
else
{
for(int i=0;i<s.size();i++)
{
    if(s[i]=='.')
    {
    if(i+p<s.size())
    {
        if(s[i+p]=='0')
            s[i]='1';
        else
            s[i]='0';
    }
        else
          s[i]='0';  
    }


}
    cout<<s<<endl;
}




return 0;
}



