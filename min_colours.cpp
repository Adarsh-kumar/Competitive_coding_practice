#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m;
cin>>n>>m;
string s;
cin>>s;

int count=0;
bool flag=0;

for(int i=1;i<s.size();i++)
{
flag=0;
if(s[i]==s[i-1])
{
count++;
if(i!=s.size()-1)
{
char temp='A';
while(s[i-1]==temp||s[i+1]==temp)
{
temp++;
if((temp-'A')>m)
{
flag=1;
break;
}
}
if(!flag)
s[i]=temp;
else
{
if(s[i-1]=="B")
s[i-1]="A";
else
s[i-1]="B";
}


else
{
char temp='A';
if(s[i-1]==temp)
{
temp++;
}
s[i]=temp;
}


}

}

cout<<count<<endl;
cout<<s<<endl;
return 0;
}

