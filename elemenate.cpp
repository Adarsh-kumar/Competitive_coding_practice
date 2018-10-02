#include<bits/stdc++.h>
using namespace std;
int n;


int main()
{
string s;

cin>>s;

int r;
int c=0;

for(int i=0;i<s.size();i++)
{
c+=(s[i]%3);
}

c%=3;

if(c==0)
cout<<0<<endl;

if(c==1)
{
if(s.size()==1)
cout<<-1<<endl;
else
{

for(int i=s.size()-1;i>=0;i--)
{
if(atoi(s[i])%3==1)
{
string temp1=s.substr(0,i);
if(i==0&&s[i+1]=='0')
{
while(atoi(s[i+1])%3!='1')
i++;
}

if(i+1<s.size())
string temp2=s.substr(i+1,s.size()-(i+1));
else
temp2="";
cout<<temp1+temp2<<endl;
break;
}
}

}

}

if(c=='2'


